clc;
clear all;
syms t;
f=t;
g=diff(f);
%F=laplace(f);
disp(g);
