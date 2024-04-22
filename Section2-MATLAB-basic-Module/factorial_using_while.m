fact=input("please enter the number to calculate the factorial\n");
number_choosed=fact;
fact_num=1;
while fact>1 
    fact_num=fact_num*fact;
    fact=fact-1;
end
fprintf("the factorial of %d is: %d\n", number_choosed,fact_num);