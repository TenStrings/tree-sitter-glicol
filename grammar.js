module.exports = grammar({
  name: 'glicol',

  extras: $ => [' ', '\t', $.comment],

  conflicts: $ => [
    [$.chain]
  ],

  rules: {
    document: $ => repeat(
      choice($.line, $._newline)
    ),
    
    comment: _ => token(prec(-10, /\/\/.*/)),


    line: $ => seq(
      $.reference,
      ":",
      $.chain,
      optional(';'),
    ),

    chain: $ => seq(
      $.node,
      repeat(seq(
        optional($._newline),
        ">>",
        $.node
      )),
    ),

    node: $ => choice($._application, $.reference_pointer),

    node_name: _ => /[a-zA-Z0-9]+/,

    _application: $ => seq($.node_name, $._argument),

    _argument: $ => repeat1(choice($.number, $.symbol, $.reference_pointer, $.js_code, $.rhai_code, $.beat_pattern)),

    number: _ => token(prec(1, /\d+(\.\d+)?/)),
    beat_pattern: _ => /(\d|_)+/,

    reference_pointer: _ => /~[a-z0-9]+(_[a-z0-9])*(\.\.)?/,

    symbol: _ => seq("\\",/[a-zA-Z0-9|_|-]+/),

    js_code: _ => seq("##", /[^#]*/, "#"),
    rhai_code: _ => seq("`", /[^`]*/, "`"),

    reference: _ => /(~|_)?[a-z0-9]+(_[a-z0-9])*(\.\.)?/,

    // TODO: duplicated rule, not sure why rebinding doesn't work
    _reference: _ => /(~|_)?[a-z0-9]+(_[a-z0-9])*(\.\.)?/,

    _newline: _ => "\n",
  }
});
