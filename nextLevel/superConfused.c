#include <stdio.h>

%:define alarm(c, o, n, f, u, s, e, d)  f ## o ## e
%:define amaze(c, o, n, f, u, s, e, d)  o ## u ## e  ## f
%:define bewilder(c, o, n, f, u, s, e, d) n ## u ## e  ## s ## f ## c
%:define affect(c, o, n, f, u, s, e, d) d ## c ## e ## n ## u ## f
%:define impress(c, h, u, m, p) amaze(s, c, e, n, a, r, i, o)
%:define perplex(e, l, k) alarm(u, n, z, i, p, p, e, d)
%:define shock(c,l,a,m,p) bewilder(p,e,r,m,e,a,t,e)
%:define $(g,o,a,l) affect(r,i,n,g,t,a,i,l)
perplex(t, h, e)impress(m, i, x, u, p)()<%$(f,l,i,p)("Confused?\n");shock(m,o,u,r,n)0;%>
