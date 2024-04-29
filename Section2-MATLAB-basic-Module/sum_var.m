function out=sum_var(~,~)
x=input('enter first number: ');
disp(['you entered: ' num2str(x)]);
y=input('enter second number: ');
disp(['you entered: ' num2str(y)]);
out =x+y;
fprintf('the sum of %d and %d is: %d\n',x,y,out);
end

