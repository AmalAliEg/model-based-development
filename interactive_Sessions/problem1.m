%1st way
A1=1:13;      %row_vector

B=repmat(A1,13,1);      %repeated 13 times as row and 1 time as column

%disp(B);

%second way

A2=colon(1,13);
B1=repmat(A2,13,1);      %repeated 13 times as row and 1 time as column
%disp(B1)

%third way

A3=linspace(1,13,13);       %start is 1,,end is 13 and seprated by 13 number
B2=repmat(A2,13,1);      %repeated 13 times as row and 1 time as column
%disp(B2)

%forth way

A4=[1     2     3     4     5     6     7     8     9    10    11    12    13;
     1     2     3     4     5     6     7     8     9    10    11    12    13;
     1     2     3     4     5     6     7     8     9    10    11    12    13;
     1     2     3     4     5     6     7     8     9    10    11    12    13;
     1     2     3     4     5     6     7     8     9    10    11    12    13;
     1     2     3     4     5     6     7     8     9    10    11    12    13;
     1     2     3     4     5     6     7     8     9    10    11    12    13;
     1     2     3     4     5     6     7     8     9    10    11    12    13;
     1     2     3     4     5     6     7     8     9    10    11    12    13;
     1     2     3     4     5     6     7     8     9    10    11    12    13;
     1     2     3     4     5     6     7     8     9    10    11    12    13;
     1     2     3     4     5     6     7     8     9    10    11    12    13;
     1     2     3     4     5     6     7     8     9    10    11    12    13;
     1     2     3     4     5     6     7     8     9    10    11    12    13];
    %B5=repmat(A4,7,1); %show matrix of 13 row numbered from 1 to 13 and 13 column numbered from 1 to 13
    disp(A4);