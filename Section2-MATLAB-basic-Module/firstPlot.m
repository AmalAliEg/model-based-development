%%plot trail one 
% f=1:100;
% g=100:199;
% 
% plot(g,f,'LineWidth',1,'Color','g','Marker','s','MarkerSize',3);
% xlabel('X-axis');
% ylabel('Y-axis');
% grid on

%%plot sin wave 
% n=linspace(0,2*pi,100);
% j=sin(n);
% l=cos(n);
% plot(l);
% scatter(j,j);
% title('sin-cos plot');
% xlabel('X-axis');
% ylabel('Y-axis');
% grid on

%%plot random data 
% n=randn(1,100);
% 
% l=2*n+0.5*randn(1,100);
% scatter(n,l);
% title('random plot');
% xlabel('X-axis');
% ylabel('Y-axis');
% grid on

%%plot random data 
% x=linspace(-2,2,100);
% y=x.^2;
% plot(x,y,'LineWidth',1,'Color','g','Marker','s','MarkerSize',3);
% 
% title('adding addtional data on same plot ');
% xlabel('X-axis');
% ylabel('Y-axis');
% hold on;
% grid on;
% 
% x1=linspace(-2,2,50);
% y1=-0.5*x1.^2;
% plot(x1,y1,'LineWidth',1,'Color','b','LineStyle','--','MarkerSize',3);



%%create subplot
x=linspace(-2,2,100);
y=x.^2;
subplot(1,2,1);
plot(x,y,'LineWidth',1,'Color','g','Marker','s','MarkerSize',3);

title('first subplot ');
xlabel('X-axis');
ylabel('Y-axis');
hold on;
grid on;

x1=linspace(-2,2,50);
y1=-0.5*x1.^2;
plot(x1,y1,'LineWidth',1,'Color','b','LineStyle','--','MarkerSize',3);
legend ('initial data','additional data');
hold off;

subplot(1,2,2);
plot(x,sin(x),'LineWidth',1,'Color','g','Marker','s','MarkerSize',3);
title('second subplot ');
xlabel('X-axis');
ylabel('Y-axis');
