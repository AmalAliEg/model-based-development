%% Find out: the array is real and square. If it is, display it;
% otherwise, show its size and type.
% NB: size(), display(), class() can be used.
% Prepare your entry data that MUST be in array
% or matrix format of any size: 1-by-1, 2-by-2, 2-by-3, etc.
% Your entry can be also any standard array generating functions!
ABC = input('Enter ANY numerical entry of any size within [ ]: ');
[Rs, Cs] = size(ABC);
if isscalar(ABC) && Rs == Cs
    fprintf('This is a square array! \n');
    disp(ABC);
else
    format short
    fprintf('This is not a square array & its size: %5g-by-%5g \n', Rs, Cs);
    disp(ABC);                          %no necessery to turn it fron str to num
end
