%%create ramp function plot
t=linspace(-1,1,1000);

ramp=max(0,t);                  %create ramp function  manually 
UnitStep(t>=0)=1;
plot(t,ramp,'LineWidth',1,'Color','g','Marker','s','MarkerSize',3);

title('ramp function');
xlabel('time');
ylabel('amplitude');
grid on;

legend ('unitStep');


