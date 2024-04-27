Mode=input("choose the one of the choices:\ncar\ntrain\nbus\nairplane\n\n\n",'s');

switch Mode
    case 'car'
        fprintf("the cost is 70 EGP\n");
    case 'train'
        fprintf("the cost is 100 EGP\n");
    case 'bus'
        fprintf("the cost is 10 EGP\n");
    case 'airplane'
        fprintf("the cost is 1000 EGP\n");   
    otherwise
        fprintf("you didn't make your choice");

end

fprintf("\n");