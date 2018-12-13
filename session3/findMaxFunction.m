function [ m ,index ] = findMaxFunction(x)
%FINDMAXFUNCTION Summary of this function goes here
%   Detailed explanation goes here
y=size(x);
m=x(1);

for i = 1: y(2)
   if  x(i) > m 
       m =x(i);
       index=i;
   end

end
