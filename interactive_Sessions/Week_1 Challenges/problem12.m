exact_value= (pi^2)/6;                   % exact value to be compared 
n_max=101;                               %the max number 
S=0;                                    %sum of the series
error_threshold=10e-13;                 %set the threshold, from problem requ. 
error_vector=zeros(1,n_max);                      %store each iteration's result in the raw vector

%loop from 0 to 101 in each iteration calculate the equation
for n=1:n_max                                 %itertative var. that increment by one
S=S+1/(n^2);

error_vector(n)=abs(exact_value-S);                         %{it is vector start from 1  
if (error_vector(n) <error_threshold)
    break;
end 
end 

%plot the Series value 
plot(1:n,error_vector(1:n),'b--o',LineWidth=1,MarkerSize=4);        %{ plot up to the last iteration where the loop stopped...
                                                                        ... so use n instead of n_max}%


title('plot Series');
xlabel('n');
ylabel('the error over the iterations');
legend ('error over iteration ');
grid on;