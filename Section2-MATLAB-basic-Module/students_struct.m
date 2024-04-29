student(1).name='aml';
student(2).name='sahar';
student(3).name='fedaa';

student(1).age=26;
student(2).age=27;
student(3).age=29;


for i=1:3
disp(['name of student ' num2str(i) ' is ' student(i).name ', age of the student ' num2str(i) ' is ' num2str(student(i).age) ])
end