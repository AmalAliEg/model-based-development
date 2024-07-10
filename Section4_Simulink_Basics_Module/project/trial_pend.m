R=5;
C=1e-6;
model="RC_circut.slx";
result=sim(model);
plot(result.logsout.get("VC").Values);
