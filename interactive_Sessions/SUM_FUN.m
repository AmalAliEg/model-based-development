function [S,Itertion_stop,error_val] = SUM_FUN(l,threshold)
%This function computes the sum of the series 10 + 35 + 65 + ... 
%according to the user input length
%inputs
clc;
k=0:l;                 %raw vector length as user defined 
S=0;                    %initialaize the sum with 0
Itertion_stop=-1;       %threshold by the user 
th=threshold;
error_val=0;
    for i=1:length(k)
    S=S+10*(2.5^(i-1));         %the operation of summing
    %condition of the stop action
        if (S>th)
            Itertion_stop=i-1;
            error_val=abs(S-th);
            fprintf("the sum exceed the limit of %.1e\nthe total sum is %.1e at the iteration no. %d\nthe differecne between the total sum and threshold is %.5e\n" ,th, S, Itertion_stop, error_val);
            break;
        end
    end

    if Itertion_stop==-1
        fprintf("the sum dosen't exceed the limit of %.1e\n" ,th);
    end
end 