module.exports = grammar({
  name: 'racket',

  extras: $ => [ $._comment, /\s+/ ],

  rules: {
    source_file: $ => seq(
      $.lang_line,
      repeat($.datum)
    ),

    lang_line: $ => seq('#lang', $.symbol),

    datum: $ => choice(
      $.number,
      $.symbol,
      $.string,
      $.quoted_datum
    ),

    string: $ => seq('"', /[^"]*/, '"'),    // TODO: escaped quotes

    quoted_datum: $ => seq("'", $.datum),

    symbol: $ => /[a-z]+/,

    number: $ => /\d+/,

    _comment: $ => token(seq(';', /.*/))
  }
});
