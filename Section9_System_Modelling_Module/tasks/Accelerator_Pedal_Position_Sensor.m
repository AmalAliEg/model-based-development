clear; clc;
sensor_sensitivity=input('enter the sensitivity of the sensor\t:','s');
Y_Interception=input('enter the value of Y_Interception\t:','s');

new_system('Accelerator_Pedal_Position_Sensor');

%add components 
add_block('simulink/Commonly Used Blocks/In1','Accelerator_Pedal_Position_Sensor/Pedal_sensor');
add_block('simulink/Sinks/Out1','Accelerator_Pedal_Position_Sensor/Potentiometer_voltage');

%{
add_block('simulink/Commonly Used Blocks/Constant','Accelerator_Pedal_Position_Sensor/Pedal_Position_input');
add_block('simulink/Sinks/Scope','Accelerator_Pedal_Position_Sensor/Potentiometer_voltage_scope');

%}

%add internal components for the app
add_block('built-in/Subsystem', 'Accelerator_Pedal_Position_Sensor/H.W_sensor_app');
add_block('simulink/Commonly Used Blocks/In1','Accelerator_Pedal_Position_Sensor/H.W_sensor_app/Pedal_sensor');
add_block('simulink/Commonly Used Blocks/Gain', 'Accelerator_Pedal_Position_Sensor/H.W_sensor_app/Sensitivity');
add_block('simulink/Math Operations/Add', 'Accelerator_Pedal_Position_Sensor/H.W_sensor_app/Summation_point');
add_block('simulink/Commonly Used Blocks/Constant','Accelerator_Pedal_Position_Sensor/H.W_sensor_app/Y_interception');
add_block('simulink/Sinks/Out1','Accelerator_Pedal_Position_Sensor/H.W_sensor_app/Potentiometer_voltage');


%connect the components together
add_line('Accelerator_Pedal_Position_Sensor','Pedal_sensor/1','H.W_sensor_app/1');
add_line('Accelerator_Pedal_Position_Sensor', 'H.W_sensor_app/1','Potentiometer_voltage/1');

add_line('Accelerator_Pedal_Position_Sensor/H.W_sensor_app', 'Pedal_sensor/1','Sensitivity/1');
add_line('Accelerator_Pedal_Position_Sensor/H.W_sensor_app','Sensitivity/1','Summation_point/1');
add_line('Accelerator_Pedal_Position_Sensor/H.W_sensor_app','Y_interception/1','Summation_point/2');
add_line('Accelerator_Pedal_Position_Sensor/H.W_sensor_app','Summation_point/1','Potentiometer_voltage/1');

%set the parameters
set_param('Accelerator_Pedal_Position_Sensor/H.W_sensor_app/Sensitivity','Gain',sensor_sensitivity);
set_param('Accelerator_Pedal_Position_Sensor/H.W_sensor_app/Y_interception','Value',Y_Interception);

%save and open the sensor
%save_system('Accelerator_Pedal_Position_Sensor');
open_system('Accelerator_Pedal_Position_Sensor');

