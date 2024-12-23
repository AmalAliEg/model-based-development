clear all; clc;

%condition to check over the choice
    new_system('md2');                                                 %create new model
    open_system('md2');

    add_block('simulink/Commonly Used Blocks/Constant','md2/Num1');
    add_block('simulink/Commonly Used Blocks/Constant','md2/Num2');
    add_block('simulink/Commonly Used Blocks/Scope','md2/disp');


     %inside subsystem
    subSys='AddTwoNumbers';
    add_block('built-in/Subsystem',['md2' '/' subSys]);
    add_block('simulink/Commonly Used Blocks/In1',['md2' '/' subSys '/' 'number1']);
    add_block('simulink/Commonly Used Blocks/In1',['md2' '/' subSys '/' 'number2']);
    add_block('simulink/Math Operations/Add',['md2' '/' subSys '/' 'sum_operator']);
    add_block('simulink/Sinks/Out1',['md2' '/' subSys '/' 'sum_value']);
   
    %end subsystem

    % set the parameters of the inner blocks
    
    set_param(['md2' '/' subSys '/' 'number1'],'Position','[100,20,150,70]');
    set_param(['md2' '/' subSys '/' 'number2'],'Position','[100,60,150,150]');
    set_param(['md2' '/' subSys '/' 'sum_operator'],'Position','[200,25,270,75]');
    set_param(['md2' '/' subSys '/' 'sum_value'],'Position','[280,25,300,75]');

    %connect the inner blocks
    add_line(['md2' '/' subSys],'number1/1','sum_operator/1');
    add_line(['md2' '/' subSys], 'number2/1','sum_operator/2');
    add_line(['md2' '/' subSys],'sum_operator/1','sum_value/1');


    % set the parameters of the outer blocks
    set_param('md2/Num1','Value','5','Position','[100,20,150,70]');
    set_param('md2/Num2','Value','10','Position','[100,85,150,125]');
    set_param(['md2' '/' subSys],'Mask','on','MaskDescription','block to add two numbers','MaskType','BlockToAddTwoNumbers','MaskDisplay','disp("Num1+Num2")','Position','[200,15,300,200]');    
    set_param('md2/disp','Position','[350,65,450,100]');

    %connect the outer blocks 
    add_line('md2','Num1/1',[ subSys '/' '1']);
    add_line('md2','Num2/1',[ subSys '/' '2']);
    add_line('md2',[ subSys '/' '1']','disp/1');

    %to simulate/run then open scope 

    sim('md2')
    save_system('md2');

 

    
