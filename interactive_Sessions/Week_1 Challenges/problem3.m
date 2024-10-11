
A1=1:7;      %row_vector

B=repmat(A1,7,1);      %repeated 7 times as row and 1 time as column

%loop over the matrix and zero the element he i or j or both are 4.
%disp(B);

for i =1:7
    for j=1:7
        if i==4||j==4
            B(i,j)=0;
        end 
    end 
end

disp(B);
