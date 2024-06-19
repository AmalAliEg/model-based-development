
%initial parameters
b=10;
M=3;
k=400;
x0=1;


mdl=gcs;            %gcs show the current simulink model 
MassValues=1:2:11;     %row vector 

for i=1:numel(MassValues)
    M=MassValues(i);
    %run the model using sim function
    result=sim(mdl);
    plot(result.logsout.get("x").Values);
    hold on
    disp("simulation "+num2str(i)+" done!");
    %label legend 
    legenLabels{i}="M = "+num2str(M);

end
legend(legenLabels);
