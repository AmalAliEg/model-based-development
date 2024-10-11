
%enter the inputs
clc; clearvars;

%-----------------------------------------------------------------------------------------------------------%
%------------------------------------------------MODEL------------------------------------------------------%
flag=0;
while(~flag)                                        %loop over the user input until it match the models 

msg1="choose the model is it cube-cylinder-reactangle ";
inp1=input(msg1,"s");
 if inp1=="cube"
        msg2="enter the side length ";
        S=input(msg2);                          %side length
        Volume=S^3;                          %volume of cube 
        disp(Volume);
        flag=1;                                    %raise a flag if model chose to quit the loop

 elseif inp1=="cylinder"
        msg2="enter the hight and radius ";
        S=input(msg2);                          %side length
        R=input(msg2);                          %radius 
        Volume=pi*R^2*S;                        %voulme of the cylinder
        disp(Volume);
        flag=1;                                    %raise a flag if model chose to quit the loop 

 elseif inp1=="reactangle"
        msg2="enter the hight and width and length ";
        S=input(msg2);                          %height 
        L=input(msg2);                          %lenght 
        W=input(msg2);                          %width                
        Volume=S*L*W;                           %voulme of the reactangle
        disp(Volume);
        flag=1;                                    %raise a flag if model chose to quit the loop
        
 else 
     disp("choose the correct model ");
 end 
end 

%-----------------------------------------------------------------------------------------------------------%
%------------------------------------------------MATERIAL---------------------------------------------------%

flag_1=0;
while(~flag_1)                                        %loop over the user input until it match the models 

msg1="choose the material is it alu-copper-steel ";
inp2=input(msg1,"s");
 if inp2=="alu"
        density=2700;
        weight=Volume*density;                          %weight  
        disp(weight);
        flag_1=1;                                    %raise a flag if model chose to quit the loop

 elseif inp2=="copper"
        density=8960;
        weight=Volume*density;                          %weight  
        disp(weight);
        flag_1=1;                                    %raise a flag if model chose to quit the loop 

 elseif inp2=="steel"
        msg2="enter the hight and width and length ";

        density=7850;
        weight=Volume*density; 
        disp(weight);
        flag_1=1;                                    %raise a flag if model chose to quit the loop
 else 
     disp("choose the one of the three materials only ");
 end 
end 

file_handle=fopen('RESULT.txt','w');
fprintf(['the model you chose is %s\n ' ...
    'the material you chose is %s\n' ...
    'the specs as below:\n' ...
    'the volume is %d cubic meter\n' ...
    'the density is %d kg/m^3\n' ...
    'the weight is %d kg\n'],inp1,inp2,Volume,density,weight);

fclose(file_handle);