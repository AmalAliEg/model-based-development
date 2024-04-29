%%create unit-step function plot
x=linspace(-2*pi,2*pi,100);
y=sin(x);
y1=cos(x);
plot(x,y,'r',x,y1,'g',LineWidth=2);
%plot(x,y,'LineWidth',1,'Color','g','Marker','s','MarkerSize',3,x,y1,'LineWidth',2,'Color','b','Marker','o','MarkerSize',5);

title('plot the sin and cos at same plot');
xlabel('x-axis');
ylabel('y-axis');
grid on;

legend ('sin(x)','cos(x)');


