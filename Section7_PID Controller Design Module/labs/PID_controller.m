%define 
num=1;
demo=[1 1];
sys=tf(num,demo);
t=0:0.1:10;                         %t- vector
kp_Vector=[0.001,0.1,0.5,1,5,100];         %kp=vector

%draw openloop and closeloop response according to t-vector without controller"kp"
OpenLoopRes=step(sys,t);
plot(t,OpenLoopRes,'Color','r','LineStyle','-');
hold on;
%negative-unity feedback
closeSys=sys/(1+sys);
CloseLoopRes=step(closeSys,t);
plot(t,CloseLoopRes,'Color','y','LineStyle','-','LineWidth',1.25);
hold on;
%draw closeloop response according to t-vector with controller"kp"

for i=1:length(kp_Vector)
    %build-in function to get the feedbak result input:G(s) ,H(s), 
    kp=kp_Vector(i);
    CloseLoopResCtrl=feedback(kp*sys,1);  
    CloseLoopResCtrlStep=step(CloseLoopResCtrl,t);
    plot (t,CloseLoopResCtrlStep,"Color",'black','LineStyle', '-.');
    hold on;
end 

%adjust the graph 

xlim([0 10]);           %x-axis limitation
ylim([0 0.5]);          %y-axis limitation

title("1,st, order system's response without controller and with controller kp");
xlabel("t-domain");
ylabel("first-order resonse");
%cellstr build-in function used to show the values of each kp on its 
% representation....transpse to show them in separte lines

legend(['OpenLoopRes without controller';'CloseLoopRes without controller';'CloseLoopRes with controller'; cellstr(num2str(kp_Vector'))])










% s=tf('s');
%Gs=1/((s+2)*(s+4));
%show and draw zeros and poles only 
%pzmap(Gs);
%root locus
%rlocus(Gs);%

%another way
%num=1;
%dem=[1 6 8];
%Gs=tf(num,dem);
%rlocus(Gs);


%anther way 
%num=[2 2];
%conv function to simplfy (s+2)(S+4)... only 2 brakets can be add
%dem=conv([1 2],[1 4]);
%Gs=tf(num,dem);
%pzmap(Gs);
%rlocus(Gs);

%s=tf('s');
%Gs=(2*s+2)/((s^2)*(s+2)*(s+5));

%pzmap(Gs);
%rlocus(Gs);
%{
K=6; %gain
R=10e3; %resistor
C=1e-7; %capacitor
T=R*C;% time constant
num=[0 K];
dem=[5 1];
gs=tf(num,dem);
hold on;
step(gs);
%}

%{
wn=0.5;
z=0.3;
num=wn^2;
dem=[1 z*wn wn^2];
Gs=tf(num,dem);
step(Gs);

%}