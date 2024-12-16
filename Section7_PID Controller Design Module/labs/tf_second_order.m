%define 
num=1;
demo=[1 5 6] ;
sys=tf(num,demo);
t=0:0.1:10;                         %t- vector
kp_Vector=[0.001,0.1,0.5,1,5,100];         %kp=vector

%draw openloop and closeloop response according to t-vector without controller"kp"
OpenLoopRes=step(sys,t);
%plot(t,OpenLoopRes,'Color','r','LineStyle','--');
%hold on;
%negative-unity feedback
closeSys=sys/(1+sys);
CloseLoopRes=step(closeSys,t);
%plot(t,CloseLoopRes,'Color','black','LineStyle','--','LineWidth',2);
%hold on;

%draw closeloop response according to t-vector with controller"kp"
OpenLoopRes;
CloseLoopRes;
for i=1:length(kp_Vector)
    %build-in function to get the feedbak result input:G(s) ,H(s), 
    kp=kp_Vector(i);
    CloseLoopResCtrl=feedback(kp*sys,1);  
    CloseLoopResCtrlStep=step(CloseLoopResCtrl,t);
    plot (t,CloseLoopResCtrlStep);
    hold on;
end 

%adjust the graph 

% xlim([0 10]);           %x-axis limitation
% ylim([0 1.7]);          %y-axis limitation

title("1,st, order system's response without controller and with controller kp");
xlabel("t-domain");
ylabel("first-order resonse");
%cellstr build-in function used to show the values of each kp on its 
% representation....transpse to show them in separte lines

legend(['OpenLoopRes without controller';'CloseLoopRes without controller';'CloseLoopRes with controller';cellstr(num2str(kp_Vector'))])







