clear; clc;
flag=1;
str1='aml';
str2='sahar';
str3='fedaa';
str4='Aly';
str5='Tamer';
str6='Elham';
comp=input('enter a string : ','s');

while (flag==1)
g=strncmp(str1,comp,5);
if (g==1)
    disp('matchi!, Matchi!');
    flag=0;
else
    disp('OOH!');    
    flag=1;
    comp=input('enter a string : ','s');
end
end
