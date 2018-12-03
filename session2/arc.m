
function h = arc(x0,y0,a,b,th1,th2)
hold on

th=th1:0.01:th2;
x=x0+a*cos(th);
y=y0+b*sin(th);
h=plot(x,y);
hold off
end