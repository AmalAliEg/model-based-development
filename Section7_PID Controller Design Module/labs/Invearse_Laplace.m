syms s l R;
% s-domain
F=1/s-(1/(s+(R/l))) ;
%time domain
f=ilaplace(F);
pretty(f);
disp(f);