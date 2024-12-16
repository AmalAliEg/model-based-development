%define 
clear all; clc;
%k=2;
syms s;
num=[1 7 12];
demo=[1 8 17 10 0];
sys=tf(num,demo);
sys_tf=1/sys;
fun=-(s^4 + 8*(s^3) + 17*(s^2) + 10*s)/(s^2 + 7*s + 12);
func_der=diff(fun);
func_der
%to check poles only
%pzmap(sys);
%step(sys);
% sys_K=feedback(k*sys,1);
% step(sys_K);
% pole(sys)
% pole(sys_K)
% figure

%rlocus(sys);
% figure
% step(sys_K);
% 
% sys_K2=feedback(2*sys,1);
% pole(sys_K2)
% figure
% step(sys_K2);