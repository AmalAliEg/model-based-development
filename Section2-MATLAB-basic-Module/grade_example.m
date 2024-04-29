grade=input('enter the grade ');
try
    if grade >=90
        disp(['the grade is (A)- You entered: ' num2str(grade)]);
    elseif grade >=80 && grade <90
        disp(['the grade is (B)- You entered: ' num2str(grade)]);
    elseif grade >=70 && grade <80
        disp(['the grade is (C)- You entered: ' num2str(grade)]);
    elseif grade>=60 && grade<70
        disp(['the grade is (D)- You entered: ' num2str(grade)]);
    elseif grade <60 && grade>=50
        disp( ['the grade is (D+)- You entered:' num2str(grade)]);
        disp("you can renroll if you wish");
    else 
        error('??!');
    end

catch
    disp(['you entered ' num2str(grade)]);
    fprintf("you didn't pass \nsee u in summer course\n");
end
