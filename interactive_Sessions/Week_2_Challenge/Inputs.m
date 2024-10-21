
%{

Script Optimization - User Input
Prompt the user to input power level and time duration
Validate the inputs (check if numeric and within range)
%}
prompt=input("Enter the time duration in minute  ");
prompt1=input("Enter the power level in Watt  ");


%{
    % Inputs
     the power vector for different power levels
     Create a time vector:
%}
time = 0:0.1:prompt;          % (representing minutes from 0 to 60 with 1-minute intervals).
power=linspace(0,prompt1,length(time));         %(representing power inputs as ones matrix the same length of the time vector
data=[time', power'];
%{
constants for the water tank system.
%}
efficiency = 0.98;
mass = 1000;  % Mass of water in grams
specific_heat = 4.2;  % Specific heat of water in J/g°C

% Define initial temperature (e.g., room temperature)
initial_temp = 25;  % in degrees Celsius