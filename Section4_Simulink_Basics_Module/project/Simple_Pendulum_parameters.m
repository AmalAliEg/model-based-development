%initial parameters
g=9.81; %acc. due to gravity
%initail comdition for theta_0 and omega_0
initial_conditions=[pi/4;0];
%time span start from 0 end after 10 sec. it is a Vector
time_span=[0,10];

%different length for the pendulum. it is a vector 

length=[1,2,3,4,5];

%anomynous function to model differential equ.
pendulum_ode=@(t, y, L) [y(2); -(g/L) * sin(y(1))];

%initial figure for ploting 
figure;
tiledlayout(2,1);

%loop throught different length
for L=length
    %solve the ode function ode45 is a MATLAB function that numerically 
    % solves differential equations using the Runge-Kutta method.
    [T, Y] = ode45(@(t, y) pendulum_ode(t, y, L), time_span, initial_conditions);

    % Extract angular displacement and angular velocity
    theta = Y(:, 1);        %got the first column of Y
    omega = Y(:, 2);        %got the second column of Y

    % Plot angular displacement
    nexttile(1);                 %sets the focus to the first subplot.
    hold on;
    plot(T, theta, 'DisplayName', ['L = ', num2str(L), ' m']);
    xlabel('Time (s)');
    ylabel('Angular Displacement (rad)');
    title('Angular Displacement vs Time');
    legend show;

    % Plot angular velocity
    nexttile(2);            %sets the focus to the second subplot.
    hold on;
    plot(T, omega, 'DisplayName', ['L = ', num2str(L), ' m']);
    xlabel('Time (s)');
    ylabel('Angular Velocity (rad/s)');
    title('Angular Velocity vs Time');
    legend show;
end