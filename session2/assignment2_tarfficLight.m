
close all 
clc
clear
figure('Name','Traffic light')

rectangle('Position',[20 15 10 30],'FaceColor','black','Curvature',0.2)
rectangle('Position',[24 5 2 10.1],'FaceColor',[0.5 0.5 0.5],'Curvature',0.2)
p = patch([24 26 26 24], [10 11 12 11], 'yellow');
p2 = patch([24 26 26 24], [6 7 8 7], 'yellow');
%rotate(p,[0 24 6],45) 
for i = 1:50
 
circle (25 ,40 ,4 , 'red')
circle (25 ,30 ,4 , [0.5 0.4 0]) % dark yellow
circle (25 ,20 ,4 , [0 0.2 0])%dark green
xlim([0 50]);
ylim([0 50]);
drawnow
pause(2);
circle (25 ,40 ,4 , [0.3 0 0]) % dark red
circle (25 ,30 ,4 , 'yellow')
circle (25 ,20 ,4 , [0 0.2 0])%dark green
xlim([0 50]);
ylim([0 50]);
drawnow
pause(2);

circle (25 ,40 ,4 , [0.3 0 0]) % dark red
circle (25 ,30 ,4 , [0.5 0.4 0]) % dark yellow
circle (25 ,20 ,4 , 'green')
xlim([0 50]);
ylim([0 50]);
drawnow
pause(2);
    
end 

