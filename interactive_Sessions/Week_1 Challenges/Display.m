function varargout=Display(varargin)
no=nargin;
varargout{1}=0;
for i=1:no
    varargout{1}=varargout{i}+varargin{i};
end 
disp(['here is the value summed ',num2str(varargout{1})]);

end 