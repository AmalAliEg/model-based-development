clear; clc;
cell_1={'aml','sahar'};
cell_2={'sahar','fedaa'};
cell_3={'fedaa','Aly'};
cell_4={'Aly','Tamer'};
cell_5={'Tamer','Elham'};
cell_6={'amll','sahar'};
%comp=input('enter a string : ','s');

%while (flag==1)
g=strcmpi(cell_1,cell_6);
if (g==1)
    disp('matchi!, Matchi!');
    flag=0;
else
    disp('OOH!');    
    flag=1;
    %comp=input('enter a string : ','s');
end
disp(['the value of g is ', num2str(g)]);
%end
