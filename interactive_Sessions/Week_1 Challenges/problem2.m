%%problem a

A5 =[1 2 3; 4 5 6; 7 8 9];

%subtraction operation
S=A5-5;         %subtract 5 from each element

%disp(S);
%square operation

B5=S.^2;         %each element power 2
%disp(B5);


%%problem b
C5=zeros(3);            %initialze the matrix with 0
for i =1:3
   for j=1:3            %loop to check offer the B5 matrix
      
       if B5(i,j)>5
           C5(i,j)=13;
       else
           C5(i,j)=14;
       end 
   end 
end 
disp(C5);