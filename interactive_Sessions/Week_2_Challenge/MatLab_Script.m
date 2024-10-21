run("Inputs.m");
%{
 Part 1: Anonymous Function for Temperature ChangeDefine an anonymous function `temp_change`:
    Input: power (in watts), time (in minutes)
    Output: temperature change
    Use formula: temperature_change = (power .* time .* efficiency) / (mass * specific_heat)
    Handle both scalar and vector inputs
%}
    temp_chg=@(power, time) (power .* time .* efficiency) / (mass * specific_heat);
%{
Part 3: Data Analysis & Plotting

For each power value in power vector:
    Calculate temperature change over time using the anonymous function
    temperature vs. time
    Add labels, title, and legend
%}
if (prompt>=0 && prompt<=60) && (prompt1>=0 && prompt1<=2000)
    temp_chg_C=zeros(1,length(time));                 %pre-allocate the matrix to store fuction output initiate the matrix with zeros
        
    for i=1:length(time)

    % Use the input power (prompt1) and time(i) for each time step
    temp_chg_C(i) = temp_chg(power(i), time(i));
     
        %%testing 
        % Debugging: Display power, time, and temperature for each step
        fprintf('Power: %d, Time: %d \n', power(i), time(i));
        %%end testing
    end
%%testing     
    %{
    Check if temp_chg_C array is populated correctly
    disp('Corrected Temperature changes over time:');
    disp(temp_chg_C);
    %}

    % Clear any previous plots and ensure nothing extra is being plotted
    clf;
    hold off;
%%end testing

    plot(time,temp_chg_C,'-o');
    title('Temperature Controller water-tank');
    legend('temp-change');
    xlabel('Time (minutes)');
    ylabel('Temperature Change (°C)');
    grid on;
else 
    fprintf('kindly enter a power from range [0,600] \na time from range [0,60]\n');
end 