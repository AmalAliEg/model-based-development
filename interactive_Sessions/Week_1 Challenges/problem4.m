A=-5:1:5;          %start ,step,end
%disp(A);
C=zeros(1,10);
for i=1:11
    if A(i)<0
        C(i)=1;
    else 
        C(i)=0;
    end 
end 

%disp(C);

%method2
N=A<0;
disp(N);

