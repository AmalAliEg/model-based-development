format short e                                                  %Format ws Capitlized
T = clock;                                                      %return vector of doubles

fprintf('This year is: %4d \n', T(1));                         %time specifier formating is %02d
% Display the current month with the correct suffix
if T(2) == 1
    fprintf('It is: %d-st month of the year: %4d \n', T(2), T(1))
elseif T(2) == 2
    fprintf('It is: %d-nd month of the year: %4d \n', T(2), T(1))
elseif T(2) == 3
    fprintf('It is: %d-rd month of the year: %4d \n', T(2), T(1))
elseif T(2) >= 11 && T(2) <= 13
    fprintf('It is: %d-th month of the year: %4d \n', T(2), T(1))
else
    fprintf('It is: %d-th month of the year: %4d \n', T(2), T(1))
end

% Display the current time (hours, minutes, and seconds)
fprintf('Current time is: %02d o''clock %02d min \n', T(4), T(5))
fprintf('and %02d secs \n', T(6))