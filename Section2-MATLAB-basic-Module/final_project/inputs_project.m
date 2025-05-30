%the inputs by the user 
link1=input('kindly, enter the length for the first link: \n--->');
 
link2=input('kindly, enter the length for the second link: \n--->');

%the angles 
theta1=linspace(0,360,1000);
theta2=linspace(0,360,1000);


%the value of x1,y1 and x2,y2  
x1= link1*cosd(theta1);                                                     %now it is a matrix of 100 element 
y1=link1*sind(theta1);

x2=x1+link2*cosd(theta1+theta2);
y2=y1+link2*sind(theta1+theta2);

%create a variable to delete the last iteration
%p=plot([0,x1(i)],[0,y1(i)],[x1(i),x2(i)],[y1(i),y2(i)]);                   %no difference from the below way
p1=plot([0,x1(1)],[0,y1(1)],'g',LineWidth=2);
p2=plot([x1(1),x2(1)],[y1(1),y2(1)],'b',LineWidth=3);

xlim([-(link1+link2)*1.5,(link1+link2)*1.5]);                                                   %add limits for the frame on x-axis
ylim([-(link1+link2)*1.5,(link1+link2)*1.5]);                                               %add limits for the frame on y-axis
hold on
grid on

plot(x2,y2);                                                                %plot the final curve path 
%to plot the different angles 
for i=1:length(theta2)
    delete(p1);
    delete(p2);
    %p=plot([0,x1(i)],[0,y1(i)],[x1(i),x2(i)],[y1(i),y2(i)]);               %no difference from the below way
    p1=plot([0,x1(i)],[0,y1(i)],'g',LineWidth=2);
    p2=plot([x1(i),x2(i)],[y1(i),y2(i)],'b',LineWidth=3);
    drawnow                                                                 %to draw the animation at same time of the loop
    %pause(0.005)                                                             %%to control the speed make it quite lower 
end 

