bn= 12:25;                                       % raw vector from -5 to 5
x=linspace(0,10,100);                           % all values from 0 to 10 with 100 
n=length(bn);                                           %length of the series
L=10;
Y=zeros(1,length(x));

%frist loop ...loop from 0 to length of x(i) over the 100 step
for i=1:length(x)                                       %Iterates over each value of x
    Sum_of_x=0;                                         % ensures that for every new value of x(i), the sum is reset to zero

    
    for j=1:n                                           %Computes the sum for each term in the series for the current x

    Sum_of_x =Sum_of_x + bn(j)*sin( (2*j-1)*pi*x(i) /L);              %The x(i) should be applied over all x values (from 0 to L with steps)...
    end        
    Y(i)=Sum_of_x/(2*L);
end 

%plot the Series value 
plot(x,Y,'b--o',LineWidth=1,MarkerSize=4);            %{ plot up to the last iteration where the loop stopped...
                                                                        ... so use n instead of n_max}%


title('plot Y(x) as function');
xlabel('x');
ylabel('Y(x)');
legend ('plot Y(x)');
grid on;