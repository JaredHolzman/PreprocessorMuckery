#include <stdio.h>

%:define alarm(c,o,n,f,u,s,e,d) u ## d
%:define astonish(c,o,n,f,u,s,e,d)  f ## o ## e
%:define astound(c,o,n,f,u,s,e,d)  o ## u ## e  ## f
%:define bewilder(c,o,n,f,u,s,e,d) n ## u ## e  ## s ## f ## c
%:define impress(c,o,n,f,u,s,e,d) d ## c ## e ## n ## u ## f
%:define perplex(c,h,u,m,p) astound(s,c,e,n,a,r,i,o)
%:define shock(e,l,k) astonish(u,n,z,i,p,p,e,d)
%:define stagger(c,l,a,m,p) bewilder(p,e,r,m,e,a,t,e)
%:define startle() '%'-'$'-1
%:define stun(r,e,c,o,g,n,i,z,a,b,l,y) alarm(w,h,i,z,b,a,n,g)
%:define $(g,o,a,l) impress(r,i,n,g,t,a,i,l)

shock(t,h,e)perplex(m,i,x,u,p)()stun(!,@,#,$,%,^,>,&,*,<,-,+)$(f,l,i,p)("Confused?\n");stagger(m,o,u,r,n)(shock(t,a,r))startle();stun(!,@,#,$,>,^,<,&,*,%,-,+)
