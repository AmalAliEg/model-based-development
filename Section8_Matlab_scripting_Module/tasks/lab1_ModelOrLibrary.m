clear all; clc;
prompt='choose what to do: write m for Model or l for Library: ';
M_L=input(prompt,'s');                                                      %take an input from user as string

%condition to check over the choice. m or l or else
if (M_L=='m')
    fprintf('your choice is a model. choose its name\n');
    model_name=input('the name is: ','s');                                  %ask the user for the model name as input           
    new_system(model_name);                                                 %create new model
    open_system(model_name);                                                %open that model
    fprintf('congrats! model created\n');

elseif (M_L=='l')
    fprintf('your choice is a Library. choose its name\n');
    library_name=input('the name is: ','s');                                %ask the user for the library name as input 
    new_system(library_name,'Library');                                     %create new library
    open_system(library_name);                                              %open that library
    fprintf('congrats! library created\n');


else 
    fprintf('you need to choose between m or l only\n');

end 

    
