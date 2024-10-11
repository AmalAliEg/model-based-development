actual_val=(pi^2)/8;                                %the one to be compared with other results
steps=101;                                          %mx steps instead of infinity in the equation
error_vector=zeros(1, steps);
E=0;                                                %estimation value
S=0;                                                %sum of the series

%loop from 0 to 101 in each iteration calculate the equation
for n=0:steps-1                                     %itertative var. that increment by one
E=1/( ((2*n)+1)^2);
S=S+E;
error_vector(n+1)= abs(actual_val-S);               %{it is vector start from 1 not 0...
                                                        ...abs function to neglect the negative value 
                                                        %}
end 
%disp(error_vector);
%plot the errors value 
plot(0:steps-1,error_vector,'b--o',LineWidth=1,MarkerSize=2);        % plot 

title('plot error');

xlabel('iteration(n)');
ylabel('error vs iteration');
legend ('error ');
grid on;