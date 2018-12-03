close all 
clc
clear
figure('Name','Batman')

%rectangle('Position',[20 15 10 30],'FaceColor','black','Curvature',0.2)
%rectangle('Position',[24 5 2 10.1],'FaceColor',[0.5 0.5 0.5],'Curvature',0.2)
%p = patch([24 26 26 24], [10 11 12 11], 'yellow');
%p2 = patch([24 26 26 24], [6 7 8 7], 'yellow');
a=3.6; % horizontal radius
b=2.2; % vertical radius
x0=-3; % x0,y0 ellipse centre coordinates
y0=0;
%function arc takes (x-center , y-center,horizontal radius,vertical
%radius,theta-start,theta-end)
arc(-3.2,0,3.6,2.2,pi*0.42,1.54*pi);%largest left arc
arc(3.2,0,3.6,2.2,-0.54*pi,0.58*pi);%largest right arc
arc(-2.1,-2.2,0.7,0.7,0,pi);
arc(2.1,-2.2,0.7,0.7,0,pi);
arc(-0.7,-2.1,0.7,0.9,-0.1*pi,pi);
arc(0.7,-2.1,0.7,0.9,0,1.1*pi);
%====================batman head
arc(1.8,1.2,0.8,1,-pi,0.3*pi);
arc(-1.8,1.2,0.8,1,-1.3*pi,0.1*pi);
hold on 
plot([1 0.9],[0.8 2.5]);
plot([-1 -0.9],[0.8 2.5]);
plot([0.9 0.6],[2.5 1.9]);
plot([-0.9 -0.6],[2.5 1.9]);
plot([-0.6 0.6],[1.9 1.9]);
plot([-0.6 0.6],[1.2 1.2],'*');
hold off
xlim([-7 7]);
ylim([-5 5]);
% drawnow



