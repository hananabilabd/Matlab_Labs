% x=[1 2 3 ;4 5 6 ;7 8 9];
close all 
clc
clear
figure('Name','Hannon')
subplot(2,2,1)
x=linspace(0,2,10);
y = 2*x+3;
plot(x,y,'y*') 
hold on 
subplot(2,2,2)
m =[24 24 26 26 24];
n =[15 5 5 15 15];

plot (m,n,'r')
fill(m,n,[1 0.5 0.5 ]);
title('title');
xlabel('x-axis');
ylabel('y-axis');
grid on
%axis([0 10 0 10]);
%axes('Xlim',[0,5],'Ylim',[0,5]);

xlim([0 40]);
ylim([0 40]);
% ______________________________

%figure
subplot(2,2,3)
theta = 0 :pi/5:2*pi;
x2 = (cos(theta) * 15) +20;
y2 = (sin(theta) * 15)+50;
plot (x2 ,y2);
fill(x2,y2,[1 0.1 0.5 ]);
xlim([-30 60]);
ylim([-30 70]);
%gtext('lol');
% -----------------------------------
subplot(2,2,4)
syms x4 ;

y4= 2*x4+3;
ezplot(y4,[1,10])

