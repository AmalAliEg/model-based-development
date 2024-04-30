%palastine flag

green_color=[0, 0.51, 0];               %the green color in RGB
white_color=[1,1, 1 ];                  %%the white color in RGB
red_color=[0.69, 0.13 ,0.13];           %%the red color in RGB
black_color=[0 ,0 ,0 ];                 %%the black color in RGB


%the dimenision in pixels
flagWidth=600;               
flagHight=400;

%set the specs for the flag figure 
figure('position',[800,350,flagWidth,flagHight]);                                           %set the frame position when it open on window
rectangle('position',[0,0,flagWidth,flagHight],'FaceColor',green_color);                    %set the frame position for the green part
rectangle('position',[0,flagHight/3,flagWidth,flagHight/3],'FaceColor',white_color);        %set the frame position for the white part
rectangle('position',[0,2*flagHight/3,flagWidth,flagHight/3],'FaceColor',black_color);      %set the frame position for the black part
hold on;                            %to make sure that the previous rectangle stay and doesn't gone

triangleX=[0, flagWidth/2 ,0];                      %[start point, long,end point]
triangleY=[0, flagHight/2, flagHight];
fill(triangleX,triangleY,red_color);
