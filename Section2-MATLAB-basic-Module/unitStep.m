%%create unit-step function plot
t=linspace(-1,1,1000);
%UnitStep=heaviside(t);          %create it by inbuild function 
UnitStep=zeros(size(t));          %create it manually 
UnitStep(t>=0)=1;
plot(t,UnitStep,'LineWidth',1,'Color','g','Marker','s','MarkerSize',3);

title('unit Step function');
xlabel('time');
ylabel('amplitude');
grid on;

legend ('unitStep');


