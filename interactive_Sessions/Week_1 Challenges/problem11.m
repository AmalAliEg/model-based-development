prompt=input("enter a number");                   % exact value to be compared 
N=prompt;                               %the max number 
sum=0;
S=zeros(1,N);                      %store each iteration's result in the raw vector

%loop from 0 to length user entered in each iteration calculate the equation
for n=1:N                                 %itertative var. that increment by one
sum=sum+ n*(n+1);
S(n+1)=sum;
end 

%plot the Series value 
plot(1:n,S(1:n),'b--o',LineWidth=1,MarkerSize=4);        %{ plot up to the last iteration where the loop stopped...
                                                                        ... so use n instead of n_max}%


title('plot Series');
xlabel('n');
ylabel('the error over the iterations');
legend ('error over iteration ');
grid on;