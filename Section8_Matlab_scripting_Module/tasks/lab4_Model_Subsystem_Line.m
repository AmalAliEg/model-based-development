clear all; clc;

%condition to check over the choice
    new_system('m');                                                 %create new model
    add_block('simulink/Sources/Step','m/in1');
    add_block('simulink/Commonly Used Blocks/Scope','m/out1');
    add_line('m','in1/1','out1/1');
    open_system('m');
 %to simulate/run then open scope 
    sim(m)
    open_system('m/out1');

 

    
