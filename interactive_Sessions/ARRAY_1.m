function  ARRAY_1()
clc;clearvas;         % Clear all variables from the Workspace
%disp(datetime);

%create A's matrix
A1=1:10;
A2=linspace(1,10,10);
A3=eye(2,10);

%creat B's matrix
B1=randi([-1,1],5,6);           %range rand. no. from 5 to 6
B2=rand(5,6);                   %range rand. no. from 0 to 1
B3=randn(5,10);                 %range rand. no. any integer

%apply operation for A's matrix
A1new1=A1+A2;                   %add A1 +A2
A1new2=A1*A3';
A3new3=A3*rot90(A2);

%display results for A's Matrix
%{
disp(A1new1);
disp(A1new2);
disp(A3new3);
%}

%apply operation for B's matrix
B1new1=mean(B3);
B2new3=sum(B2);
B2new2=B1'*B3;

%display results for B's Matrix
%{
disp(B1new1);
disp(B2new3);
disp(B2new2);
%}

%create mix of the matrices
g=A1(1,1:6);

A1B2=vertcat(g,B2);
A2B3=[repmat(A2,5,1);repmat(B3,1,1)];

disp(A1B2);
disp(A2B3);
end