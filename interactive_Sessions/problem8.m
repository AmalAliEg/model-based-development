function [outputArg1,outputArg2] = problem8(inputArg1,inputArg2)
%UNTITLED13 Summary of this function goes here
%   Detailed explanation goes here
% intialize the parameter. 
theta=linspace(0:pi:2000);  %steps from 0 to pi
g= cos(theta);              %compute the equation
threshold=0.9999;            %threshold ..the maximum to stop the computational
tolerance=1e-3;             %tolerance where 1-0.99999
step =1;

while step<length(g)


end 
outputArg1 = inputArg1;
outputArg2 = inputArg2;
end