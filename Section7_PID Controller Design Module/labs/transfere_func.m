clc; clear all;

%syms s;
NOM =[2 0 -0.5 4];
DOM =[0 5 3 -1];
transfere=tf(NOM,DOM);
%s=tf('s');
%NUM_POLY = (2*(s^3)-(0.5*s)+4);
%DOM_POLY =  (5*(s^2)+(3*s)-1);
%tra=NUM_POLY/DOM_POLY;
transfere
%tra