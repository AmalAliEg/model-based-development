clear all; clc;

%condition to check over the choice
    model_name=input('choose your model name\n ','s');                                  %ask the user for the model name as input           
    new_system(model_name);                                                 %create new model
    no_blocks=input('add number of the blocks');

    for i=1:no_blocks

        subsystem_name=input('choose the block name\n','s');                                %ask the user for the library name as input 
        add_block('simulink/Commonly Used Blocks/Subsystem',[model_name '/' subsystem_name]);
    end

        
 

    
