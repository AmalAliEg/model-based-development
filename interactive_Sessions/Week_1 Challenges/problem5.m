%first method
% 
E=[3,5,7; 
   1,1,4];        

D=zeros(2,3);

for i=1:2
    for j=1:3
        if E(i,j)<3||E(i,j)>5
            D(i,j)=0;
        else 
            D(i,j)=E(i,j);
        end
    end
end
%disp(D);

%second method
F=E;            %copy matrix E to matrix F
F(E<3|E>5)=0;   %check element by elemnet 

disp(F);