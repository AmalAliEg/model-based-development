clear all; clc;

%creat new sysytem 
new_system('md1');
add_block('simulink/Commonly Used Blocks/Scope','md1/scp1');
bl1=add_block('simulink/Commonly Used Blocks/Gain','md1/gain1');
bl2=add_block('simulink/Sources/Step','md1/stp1');
add_line('md1','stp1/1','gain1/1');
add_line('md1','gain1/1','scp1/1');

%change values 
set_param(bl2,'Time','2','After','4','Position','[100,200,150,250]');
set_param(bl1,'Gain','3','Position','[200,200,250,250]');
set_param('md1/scp1','Position','[300,200,350,250]');
sampletime=get_param('md1/scp1','SampleTime')
%regard system 

open_system('md1')
sim('md1');
save_system('md1');
close_system('md1');
