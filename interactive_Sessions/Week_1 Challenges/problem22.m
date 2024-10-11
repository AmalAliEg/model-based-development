format short e                                                  %Format ws Capitlized
T = datetime('now');                                            %it is object

%extract each category, day,month, year ,hour, minute , second from the
%library    already inbuild functions
day_value=day(T);
month_value=month(T);
year_value=year(T);
hour_value=hour(T);
minute_value=minute(T);
second_value=second(T);

% Display the current month with the correct suffix
if month_value== 1
    fprintf('Current day is: %d day of the %d-st month of the year: %4d \n', day_value, month_value, year_value)
elseif month_value== 2
    fprintf('Current day is: %d day of the %d-nd month of the year: %4d \n', day_value, month_value, year_value)
elseif month_value == 3
    fprintf('Current day is: %d day of the %d-rd month of the year: %4d \n', day_value, month_value, year_value)
elseif month_value >= 11 && month_value <= 13
    fprintf('Current day is: %d day of the %d-th month of the year: %4d \n', day_value, month_value, year_value)
else
    fprintf('Current day is: %d day of the %d-th month of the year: %4d \n', day_value, month_value, year_value)
end

% Display the current time (hours, minutes, and seconds)
fprintf('Current time is: %02d o''clock %02d min and %02d secs \n', hour_value, minute_value, second_value);
