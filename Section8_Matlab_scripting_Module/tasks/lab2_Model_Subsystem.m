clear all; clc;
prompt='choose what to do: write m for Model or s for model with subsystem: ';
M_L=input(prompt,'s');                                                      %take an input from user as string

%condition to check over the choice. m or l or else
if (M_L=='m')
    model_name=input('your choice is a model. choose its name\n ','s');                                  %ask the user for the model name as input           
    %new_system(model_name);                                                 %create new model
    open_system(model_name);                                                %open that model
    fprintf('congrats! model created\n');

elseif (M_L=='s')
    model_name=input('your choice is a model with subsystem. choose its name\n ','s');
    subsystem_name=input('your choice is to add specific subsystem. choose its name\n','s');                                %ask the user for the library name as input 
    new_system(model_name);                                                 %create new model
    open_system(model_name);                                                %open that model
    add_block('simulink/Commonly Used Blocks/Subsystem',[model_name '/' subsystem_name]);
    %open_system([model_name '/' subsystem_name]);                           %open that library
    fprintf('congrats! library created\n');


else 
    fprintf('your need to choose between m or l only\n');

end 

    
