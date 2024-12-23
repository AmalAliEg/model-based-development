clear ; clc;
close all;
%get system already there to the memory
load_system('Counter_Model.slx');
%simulate then save then open the system

sim('Counter_Model','StopTime','20');
%save_system(model_name);
open_system('Counter_Model');