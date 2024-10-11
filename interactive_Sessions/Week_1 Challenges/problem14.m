% Find out if the entry is a Scalar or NOT.
% Prepare your entry data that MUST be in array
% or matrix format of any size: 1-by-1, 2-by-2, 2-by-3, etc!
% Your entry can also be any standard array generating functions!
ABC = input('Enter ANY numerical entry of any size surrounded with square brackets [ ]: ');

if isnumeric(ABC) && isscalar(ABC)
    fprintf('This is a scalar: %20g \n', ABC);
else
    %format short
    fprintf('Your entry is not scalar, but an array \n');        %remove the var. ABC
    disp(ABC);                                                %fprintf can't used to print array
                                                                  ...use disp of loop 
end
