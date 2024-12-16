syms s y;
m=[((s^2)+s+1) y;-s-1 0];
m1=[((s^2)+s+1) -s-1;-s-1 ((s^2)+s+1)];
disp(det(m));
disp(det(m1));