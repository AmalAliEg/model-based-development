%% Q7. Computing area of a circle, square, and rectangle w.r.t the user entries:

W = input('Width of a rectangle: ');           %use input without s
L = input('Length of a rectangle: ');
R = input('Radius of a circle: ');
S = input('Side length of a square: ');

if isempty(R) && isempty(S)
    A1 = W*L;
    fprintf('Area of a rectangle: A1 = %5g \n', A1);
elseif isempty(W) && isempty(L) && ~isempty('R') && ~isempty('S')    %use ~isempty instead of exist
    A2 = pi*R^2; A3 = S^2;
    fprintf('Area of a circle: A2 = %5g \n', A2);
    fprintf('Area of a square: A3 = %5g \n', A3);
elseif isempty(W) && isempty(L) && isempty(R)
    A3 = S^2;
    fprintf('Area of a square: A3 = %5g \n', A3);
elseif isempty(S) && isempty(W) && isempty(L)
    A2 = pi*R^2;
    fprintf('Area of a circle: A2 = %5g \n', A2);
elseif ~isempty('W') && ~isempty('L') && ~isempty('R') && ~isempty('S')     %elseif not else
    A1 = W*L; A2 = pi*R^2; A3 = S^2;
    fprintf('Area of a rectangle: A1 = %5g \n', A1);
    fprintf('Area of a circle: A2 = %5g \n', A2);
    fprintf('Area of a square: A3 = %5g \n', A3);
else
    fprintf('You need to ENTER some dimensions! \n')
end
