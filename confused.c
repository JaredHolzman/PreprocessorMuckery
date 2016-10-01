#include <stdio.h>

// %:define as() printf
%:define baz() return
%:define foo(a, b) a ## b
%:define $ printf
%:define fum %>
%:define fee() int
%:define amaze(c, o, n, f, u, s, e, d)  o ## u ## e  ## f
%:define fie(c, h, u, m, p) amaze(s, c, e, n, a, r, i, o)

fee()fie(m, i, x, u, p)()foo(<, %)$("Confused?\n");baz()0;fum
