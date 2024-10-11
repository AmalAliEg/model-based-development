%% Assessing the student performances
clc; clearvars
SP = input('Enter the student grade: ');
if SP <  0 && SP > 100                                                  %check the valid range
    disp('Invalid grade! Please enter a value between 0 and 100.');
end

if SP <= 65
    disp(['Student Grade is F the grade is ' num2str(SP)])                %add []
elseif SP >= 66 && SP <= 71                         
    disp(['Student Grade is D the grade is ' num2str(SP)])                     
elseif SP >= 72 && SP <= 81                                     %instead of SP>71 it's SP>=72
    disp(['Student Grade is C the grade is ' num2str(SP)])
elseif SP >= 82 && SP <= 87
    disp(['Student Grade is B the grade is ' num2str(SP)])
else
    disp(['Student Grade is A the grade is ' num2str(SP)])
end
