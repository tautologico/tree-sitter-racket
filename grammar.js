module.exports = grammar({
  name: 'racket',

  rules: {
    source_file: $ => seq(
      $.lang_line,
      repeat($.datum)
    ),

    lang_line: $ => seq('#lang', $.identifier),

    datum: $ => choice(
      $.number,
      $.identifier,
      $.quoted_datum
    ),

    quoted_datum: $ => seq("'", $.datum),

    identifier: $ => /[a-z]+/,

    number: $ => /\d+/
  }
});
