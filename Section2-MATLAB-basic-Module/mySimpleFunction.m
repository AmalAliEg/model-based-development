function sum=mySimpleFunction(~,~)
    x=input('enter first number: ');
    disp(['you entered: ' num2str(x)]);
    y=input('enter second number: ');
    disp(['you entered: ' num2str(y)]);
    sum=x+y;
    fprintf('\nthe sum of %d and %d is: %d\n',x,y,sum);
end