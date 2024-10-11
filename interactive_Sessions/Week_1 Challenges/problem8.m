function problem8()
%UNTITLED13 Summary of this function goes here
%   Detailed explanation goes here
% intialize the parameter. 
theta=linspace(0,pi,200);  %steps from 0 to pi
g= cos(theta);              %compute the equation
threshold=0.99;            %threshold ..the maximum to stop the computational
tolerance=1e-2;             %tolerance where 1-0.99999
step =1;

while step<length(g)            %loop over the 2000 step of the theta
    if tolerance>abs(g(step)-threshold)
    break;  % Stop the computation when g(theta) ≈ 0.99999
    else 
        step=step+1;
    end 
end 
% Display the number of steps
disp(['number of steps taken is: ', num2str(step)]);

%plot the graph 
%plot(theta, g, LineWidth=1,Color='b',LineStyle='--',Marker='o',MarkerSize=2) ;
plot(theta, g, 'b--o',MarkerSize=2) ;

hold on;
title("plot problem 8");                %add title for the plot GUI
xlabel('\theta');                        %add x-axis for the plot GUI
ylabel('g(\theta)');                     %add y-axis for the plot GUI
legend('plot the cos(\theta)');          %show legend

% Highlight the point where g(\theta) ≈ 0.99999
%plot(theta(step),g(step),markersize=8,MarkerFaceColor="auto",Marker="o",MarkerEdgeColor="auto");
% Highlight the point where g(\theta) ≈ 0.99999
plot(theta(step), g(step), 'ro', 'MarkerSize', 8, 'MarkerFaceColor', 'r');
text(theta(step), g(step), [' g(\theta) = ', num2str(g(step))], 'VerticalAlignment', 'bottom');  

hold off
end