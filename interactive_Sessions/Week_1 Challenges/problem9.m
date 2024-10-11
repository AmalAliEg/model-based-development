%enter the inputs 
msg1="enter the Width of a rectangle: ";
inp1=input(msg1);

msg2="enter the Length of a rectangle: ";
inp2=input(msg2);

msg3="enter the Radius of a circle: ";
inp3=input(msg3);

msg4="enter the Side length of a square:  ";
inp4=input(msg4);

%the condition
if (~isempty(inp1) && ~isempty(inp2) && isempty(inp4) && isempty(inp3))
    r=inp2*inp1;
    disp(['the area of a rectangle is ',num2str(r)]);

elseif(~isempty(inp3)  && ~isempty(inp4) &&isempty(inp1) && isempty(inp2))
    c=(inp3^2)*pi;
    s=inp4^2;
    disp(['the area of a circle is ',num2str(c),'the area od the square is ', num2str(s)]);

elseif (~isempty(inp1) && ~isempty(inp2) && ~isempty(inp3) && ~isempty(inp4))
    r=inp2*inp1;
    c=(pi^2)*inp3;
    s=inp4^2;
    disp(['the area of a rectangle is ',num2str(r), 'the area of a circle is ',num2str(c),'the area od the square is ', num2str(s)]);
else 
    disp("You need to ENTER all dimensions!");
end
