clear ; clc;
close all;
%set the var. and inputs of the program
model_name='Counter_Model';
subSys_Name='Counter';
User_input=input('Kindly, enter a number: ',"s");

%set new system
new_system(model_name);

%add counter subsystem
add_block('built-in/Subsystem',[model_name '/' subSys_Name ]);

%set the parameters for the subsys.
set_param([model_name '/' subSys_Name],'Mask','on','Position','[100,50,250,150]');


%add blocks inside the subsystem
add_block('simulink/Commonly Used Blocks/In1',[model_name '/' subSys_Name '/' 'Input']);
add_block('simulink/Discrete/Unit Delay',[model_name '/' subSys_Name '/' 'Delay']);
add_block('simulink/Commonly Used Blocks/Sum',[model_name '/' subSys_Name '/' 'Sum_point']);
add_block('simulink/Commonly Used Blocks/Out1',[model_name '/' subSys_Name '/' 'actual_Output']);

%link and connect the blocks
add_line([model_name '/' subSys_Name],'Input/1','Sum_point/1');
add_line([model_name '/' subSys_Name],'Sum_point/1','actual_Output/1');
add_line([model_name '/' subSys_Name],'Sum_point/1','Delay/1');
add_line([model_name '/' subSys_Name],'Delay/1','Sum_point/2');

%set the parameters for the subsys.
set_param([model_name '/' subSys_Name '/' 'Delay' ],'orientation', 'left');

%add blocks in the model itself
add_block('simulink/Commonly Used Blocks/Constant', [model_name '/' 'Num_Inp'] );
add_block('simulink/Commonly Used Blocks/Scope',[model_name '/' 'Scope_out']);

%set the parameters for the user input.
set_param([model_name '/' 'Num_Inp' ],'Value', User_input);
set_param([model_name '/' 'Scope_out' ], 'NumInputPorts', '2' );

%link and connect the outer blocks
add_line(model_name,'Num_Inp/1',[subSys_Name '/' '1']);
add_line(model_name,'Num_Inp/1','Scope_out/1');
add_line(model_name,[subSys_Name '/' '1'],'Scope_out/2');



