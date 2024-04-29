%%count loop from 1 to 10 and step by 2 
% for count= 1:2:10
%     fprintf("%d \t",count);
% 
% 
% end
% fprintf("\n");
%%-------------------------------------------------------------------------

%%display the array elements one by one 
% arr=[10,50,78,94,3,7];
% 
% for index=arr
%     disp(index);
% 
% 
% end
%%-------------------------------------------------------------------------

%%nested loop for multiplication

% for i=1:5
%     for j=1:5
%         fprintf("the multiplication of %d and %d is %d\n",i,j,i*j);
% 
%     end
%     fprintf('\n');
% end
%%-------------------------------------------------------------------------

%%try while loop practice 
% user_input=0;
% while user_input~=42
%     user_input=input('enter a number yalla!\n');
% 
% end
% disp('heeeh! congrats!!--you entered 42');
%%-------------------------------------------------------------------------

%%try and catch example
% x=input('enter a number:  ');
% try 
%     if x<0
%         error('x must be non-negative value');
%     else 
%         disp('fine there no error');
% 
%     end
% catch 
%     disp(['there error!... ' ...
%         '>>check the input value<<']);
% 
% end
%%-------------------------------------------------------------------------

%%function to sum and minus at same time example
% function [sum,minus]=practice_examples(~,~)
%     x=input('enter first number: ');
%     disp(['you entered: ' num2str(x)]);
%     y=input('enter second number: ');
%     disp(['you entered: ' num2str(y)]);
%     sum=x+y;
%     minus=x-y;
%     fprintf('\nthe sum of %d and %d is: %d\n\nthe difference between %d and %d is %d\n',x,y,sum,x,y,minus);
% end

% function [sum,minus]=practice_examples(x,y)
% 
%     sum=x+y;
%     minus=x-y;
%     fprintf('\n->the sum of %d and %d is: %d\n->the difference between %d and %d is %d\n',x,y,sum,x,y,minus);
% end

%%-------------------------------------------------------------------------

%%function to handle any number of inputs example
% function output=practice_examples(varargin) %varargin is the keyword to add unlimited inputs
%     ArgNum=nargin;                          %nargin is the keyword to count number of inputs
%     for i = 1:ArgNum
%         fprintf('input %d: is %d\n',i ,varargin{i});
%     end
%     output='function is done ';
% 
% end

%%-------------------------------------------------------------------------

%%function to handle any number of outputs example
% function varargout=practice_examples(ArgNumOut) %varargout is the keyword to add unlimited inputs
%     for i = 1:ArgNumOut
%         varargout{i}=i+1;
%         fprintf('output %d: is %d\n',i ,varargout{i});
%     end
% 
% end