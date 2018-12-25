x=1;
y=2;
z=bitand(x,y);
z2=bitxor(x,y);
z3=bitor(x,y);
z4=bitget(x,y);
z5=bitset(x,2);%least significant is 1
z6=bitshift(x,-2);% x is shifted by value of y ,, y can be negative to shift right
disp(z6);
disp(dec2bin(z6));
c1=uint(8);
c=3;
v=[2 'hello']; % cannot be used because unhomogenous
q={1,'bbb'};
q{1}+q{2}
s=struct('a',4,'b',{2,3});
%disp(s.a);
disp(s(1).a);

