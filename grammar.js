/**
 * @fileoverview    Tree-sitter grammar file for Apache Dispatcher Configuration files.
 * @author          Darian Benam <darian@darianbenam.com>
 */

module.exports = grammar({
	name: "apache_dispatcher_config",
	rules: {
		source_file: $ => repeat(
			choice(
				$.comment,
				$.function,
				$.number,
				$.property,
				$.string
			)
		),
		comment: $ => seq("#", /.*/),
		function_name: $ => seq(/\$([a-zA-Z0-9_\-\$]+)?/),
		function: $ => prec.right(
			1,
			seq(
				$.function_name,
				optional(
					choice(
						seq(
							field(
								"function_parameter",
								$.string
							)
						)
					)
				)
			)
		),
		number: $ => /-?[0-9]+(\.[0-9]+)?/,
		string: $ => token(
			choice(
				seq("\"", /[^"]*/, "\""),
				seq("'", /[^']*/, "'")
			)
		),
		scoped_property: $ => seq(
			"{",
			repeat(
				choice(
					$.property,
					$.function,
					$.string,
					$.comment
				)
			),
			"}"
		),
		property_name: $ => seq(/\/([a-zA-Z0-9_\-\/]+)?/),
		property: $ => prec.right(
			1,
			seq(
				$.property_name,
				optional(
					choice(
						$.comment,
						$.function,
						$.number,
						$.scoped_property,
						$.string
					)
				)
			)
		)
	}
});
