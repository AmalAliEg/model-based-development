Mode=input("choose the one of the color code :\n0000\n1111\n2222\n3333\n4444\n5555\n\n");

switch Mode
    case 0000
        fprintf("the color corrospond to the code is Red\n");
    case 1111
        fprintf("the color corrospond to the code is Yellow\n");
    case 2222
        fprintf("the color corrospond to the code is Blue\n");
    case 3333
        fprintf("the color corrospond to the code is Orange\n");
    case 4444
        fprintf("the color corrospond to the code is Black\n");  
    case 5555
        fprintf("the color corrospond to the code is Purple\n");        
    otherwise
        fprintf("you didn't make your choice");

end

fprintf("\n");