#include <stdio.h>

// %:define as() printf
%:define alarm(c, o, n, f, u, s, e, d)  f ## o ## e
%:define amaze(c, o, n, f, u, s, e, d)  o ## u ## e  ## f
%:define fie(c, h, u, m, p) amaze(s, c, e, n, a, r, i, o)
%:define fee(e, l, k) alarm(u, n, z, i, p, p, e, d)
%:define baz() return
%:define foo(a, b) a ## b
%:define $ printf

fee(t, h, e)fie(m, i, x, u, p)()foo(<, %)$("Confused?\n");baz()0;%>
