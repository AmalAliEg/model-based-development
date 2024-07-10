% Define system parameters
R = 1e3; % Resistance in ohms (1 kOhm)
C = 1e-6; % Capacitance in farads (1 µF)
Vin = @(t) 5 * sin(2 * pi * t); % Input voltage function

% Define the differential equation
dVdt = @(t, Vc) (1/(R*C)) * (Vin(t) - Vc);

% Initial condition
Vc0 = 0;

% Time span for the simulation
time_span = [0 10];

% Solve the differential equation using ode45
[T, Vc] = ode45(dVdt, time_span, Vc0);

% Plot the results
figure;
plot(T, Vc, 'LineWidth', 1.5);
xlabel('Time (s)');
ylabel('Voltage across capacitor V_C(t) (V)');
title('Voltage across Capacitor in RC Circuit');
grid on;