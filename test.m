c = [0 0] ;   % center of circle
th = linspace(0,2*pi) ;
r = 0.1;
x = c(1)+r*cos(th) ;
y = c(1)+r*sin(th) ;
h = plot(x,y,'r') ;
axis equal 
%%animation
for i = 1:100
    c = rand(1,2) ;  % center of circle
      x = c(1)+r*cos(th) ;
      y = c(1)+r*sin(th) ;
      set(h,'XData',x,'YData',y) ;
      axis([-2 2 -2 2])    
      drawnow
end