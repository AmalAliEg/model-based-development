function area= calculateCircleArea(~)
    x=input('enter the radius: ');
    
    area=x^2*pi;
    fprintf('\nthe area of the circle with radius %d is: %f\n',x,area);
end