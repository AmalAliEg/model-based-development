%% Find out whether the array is square and if it is, show its size.
% Prepare your entry data that MUST be in array
% or matrix format of any size: 1-by-1, 2-by-2, 2-by-3, etc, etc!
% Your entry can be also any standard array generating functions!!!
ABC = input('Enter ANY numerical entry of any size within [ ]: ');
[Rows, Cols] = size(ABC);
if isnumeric(ABC) && Cols == Rows                                   % Row== Row will give true all time
    fprintf('This is a square ARRAY! ');
    fprintf('Your entry is of %2g -by- %g square ARRAY \n', Rows, Cols);    %Rows comes first
else
    format short
    fprintf('Your entry is NOT a square array \n')
    fprintf('BUT AN ARRAY of size %2g - by - %2g \n', Rows, Cols);          %Rows comes first
end
