clear; clc;
%set the algebric model
%set the time and the input of the Accelerator_Pedal_Position_Sensor app
t=linspace(0,10,50)';                   %time __transpose to turn it as column vector
u=linspace(0,1,50)';                    %input__transpose to turn it as column vector

%load the model 
load_system('Accelerator_Pedal_Position_Sensor');
open_system('Accelerator_Pedal_Position_Sensor');
sim('Accelerator_Pedal_Position_Sensor');