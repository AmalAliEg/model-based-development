g=[0,0.51,0.25];
r=[0.70,0.13,0.20];
b=[0,0,0];
w=[1,1,1];

flag_width=1000;
flag_hight=600;


figure('Position',[530,50,flag_width,flag_hight]);
title('Free-Palestine');
rectangle('Position',[0,0,flag_width,(flag_hight/3)],FaceColor=g);
hold on
rectangle('Position',[0,(flag_hight/3),flag_width,(flag_hight/3)],FaceColor=w);
hold on
rectangle('Position',[0,(2*flag_hight/3),flag_width,(flag_hight/3)],FaceColor=b);
hold on
triangX=[0,flag_width/2,0];
triangY=[0,flag_hight/2,flag_hight];
patch(triangX,triangY,r);
