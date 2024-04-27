fID=fopen("example1.txt","w");          %create file called example1.txt and write on this file 
if fID ==-1
    error ('the file you mention is not created yet');
else 
    fprintf(fID,'yes here you go!\n');

end

Diploma='Model based development';
N_module =10;
C_module='MatLab basics';

fprintf(fID,'the name of the diploma is %s\n',Diploma);
fprintf(fID,'the module is number %d\n',N_module);
fprintf(fID,'the name of the current module is %s\n',C_module);

fclose(fID);            %save the changes and close th file 
type example1.txt;      %display the file on the command window since it called
