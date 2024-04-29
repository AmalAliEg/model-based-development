function [meanValue,stdDeviation]=computeStatistics (VectorInput)
    meanValue=mean(VectorInput);
    stdDeviation=std(VectorInput);
   
    fprintf('\nthe mean is %f\n the deviation is %f \n',meanValue,stdDeviation);
end

