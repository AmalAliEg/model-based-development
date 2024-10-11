%% Find out: the user entry is scalar or not. If it is, display it.
% otherwise, show the variable type.
ABC = input('Enter ANY numerical entry of any size within [ ]: ');

if isnumeric(ABC) && isscalar(ABC)
    fprintf('This is a Scalar! \n');
    fprintf('Your entry is a scalar: %5g \n', ABC);
else
    m= class(ABC);                                           %remove the 1
    disp(m);
   % fprintf('Your entry under class: %g ',m);
end
