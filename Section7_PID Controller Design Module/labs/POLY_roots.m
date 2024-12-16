clc; clear all;
%step: multiply function with itself shifted by 1 element to get zero crossings and get negative values
%NOM =@(s) (2.*s.^3-0.5.*s+4);
%DOM =@(s) (5.*s.^2+3.*s-1);
N=[0 5 3 -1];
D=[2 0 -0.5 4];

pole=roots(N);
root=roots(D);
%fprintf("the pole is %ld\t:the root is %ld\n", pole,root);
disp(pole);
disp(root);
