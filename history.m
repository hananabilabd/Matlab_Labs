%-- 11/25/18  9:50 AM --%
e = 3+4
clear
f=4
save bor3y.mat
cd D:
cd F:
cd Program
cd Programs
cd ../
cd Enginnering
cd Engineering
cd ITI
mkdir Matlab_Labs
cd Matlab_Labs\
save bor3y.mat
clear
load bor3y.mat
clear
cls
clc
rm bor3y.mat
cd ../\
cd Matlab_Labs\
pwd
prefdir
e = [ 1 2 3 4 ]
e = [ 1; 2 ; 3 ;4]
e'
e.size
size(e)
e.lenght
length(e)
help clear
max(e)
min (e)
eye(3,3)
ones(3,3)
magic(3)
zeros(3,3)
cls
clc
randi(10)
w = [ 1 2 3 ; 4 5 6]
w(:,1)
sort(w,'descend')
sort(w,1)
sort(w)
sort(w,2)
x = randi(5,5,5)
x(:,1)
eye (4,4)
find(eye(4,4))
1:2:50
linespace (1,3,200)
linspace(1,3,100)
graph(linspace(1,3,50))
help linspace
%-- 11/25/18  9:42 PM --%
X = [ 2 3 4 ; 5 6 23 ; 77 5 4]
Y = [0 7 6 ; 4 63 2; 7 51 44]
z = [ 0 7 6 ; 4 63 2 ]
vertcat(X,Y)
(X,Y)
[X,Y]
[X;Y]
horzcat(X,Y)
X.Y
X
Y
X.*Y
X*Y
X'
help sum
sum (X,1)
sum (X,2)
sum (Y, 'all')
S = sum(X,'all')
sum(X(:))
help product
help multiply
X(:)
prod(X,'all)
prod(X(:))
2*5*77*3*6*5*4*23*4
X
max(X)
min(X(:))
Y
min(Y(:))
Z
z
max(size(z))
s = size(z)
X
sort(A)
sort(X)
sort(X,1,'ascend')
sort(X,1,'sescend')
sort(X,1,'descend')
linspace(1,10,100)
save data.mat
clear
clc
help clc
clear data.mat
load data.mat
date
ls
pwd
cd F:
cd Engineering\ITI\Matlab_Labs\
save data.mat
help set
X
X(:)
find(Y)
Y
help find
find(~X)
find(~Y)
Y
who
%-- 11/25/18 10:26 PM --%
load bor3y
%-- 11/25/18 10:29 PM --%
%-- 11/25/18 10:30 PM --%
= MLStartDir("F:\Engineering\ITI\Matlab_Labs")
MLStartDir("F:\Engineering\ITI\Matlab_Labs")
MLStartDir("f:\Engineering\ITI\Matlab_Labs")
help MLStartDir
%-- 11/25/18 10:37 PM --%
userpath('F:\Engineering\ITI\Matlab_Labs')
%-- 11/25/18 10:39 PM --%
%-- 11/30/18 10:15 PM --%
userpath('F:\Engineering\ITI\Matlab_Labs')
userpath('F:\ITI\Matlab_Labs')
%-- 11/30/18 10:16 PM --%
%-- 12/1/18  9:11 PM --%
= MLStartDir("F:\Engineering\ITI\Matlab_Labs")
MLStartDir("F:\Engineering\ITI\Matlab_Labs")
MLStartDir("f:\Engineering\ITI\Matlab_Labs")
help MLStartDir
%-- 12/2/18  9:22 AM --%
X = [ 2 3 4 ; 5 6 23 ; 77 5 4]
Y = [0 7 6 ; 4 63 2; 7 51 44]
z = [ 0 7 6 ; 4 63 2 ]
vertcat(X,Y)
(X,Y)
[X,Y]
[X;Y]
horzcat(X,Y)
X.Y
X
Y
X.*Y
X*Y
X'
help sum
sum (X,1)
sum (X,2)
sum (Y, 'all')
S = sum(X,'all')
sum(X(:))
help product
help multiply
X(:)
prod(X,'all)
prod(X(:))
2*5*77*3*6*5*4*23*4
X
max(X)
min(X(:))
Y
min(Y(:))
Z
z
max(size(z))
s = size(z)
X
sort(A)
sort(X)
sort(X,1,'ascend')
sort(X,1,'sescend')
sort(X,1,'descend')
linspace(1,10,100)
save data.mat
clear
clc
help clc
clear data.mat
load data.mat
date
ls
pwd
cd F:
cd Engineering\ITI\Matlab_Labs\
save data.mat
help set
X
X(:)
find(Y)
Y
help find
find(~X)
find(~Y)
Y
who
first.m]
first.m
help rand
first.m
help randi
rand(100)
rand[100,100]
first.m
help figure
first.m
help axes
theta = 0 :pi/5:2*pi;
size(theta)
forLoop.m
%-- 12/3/18  1:18 PM --%
z = 1 :3
z = 1 : 2 : 5
%-- 12/3/18  3:17 PM --%
help rotate
P = plot_arc(pi/4,3*pi/3,9,-4,3);
set(P,'edgecolor','b','linewidth',4)
P = plot_arc(pi/4,3*pi/3,9,-4,3);
Arc2d
help Arc2d
plot::Arc2d
y =-10 :0.01:10
y =-3 :0.1:3
y =-3 :1:3
y =-3 :0.1:3
%-- 12/6/18 11:47 AM --%
%-- 12/6/18  4:13 PM --%
%-- 12/9/18  2:27 PM --%
3
hanna
4
44
%-- 12/9/18  2:55 PM --%
7
6
5
6
lolo
[x y] =FunctionAddition(3,4)
[x y] =FunctionAddition(4,4)
help FunctionAddition
cd ..
[x y] =FunctionAddition(4,4)
x [ 1 2 3 4 ]
x =[ 1 2 3 4 ]
for i =0 :4
for i =0 :x.size
fprintf(x[i]);
for i =0 :x.size
fprintf(x(i));
end
x =[ 1 2 3 4 ]
x(1)
x(2)
x(4)
1 2 3 4
x = [ 1 2 3 4]
x.size
1 2 4 5
[1 2 3 4]
x = [1 2 3 4]
x (1)
x (3)
size(x)
y = size(x)
y.1
y(2)
[1 2 3 4]
[ 1 2 3 4 5]
[1 2 3 4 ]
[ 1 2 3 4 ]
[1 2 3 4]
[ 2 3 4 5 6]
%-- 12/20/18  2:14 PM --%
printFun
x
printFun
printFu
printFun
x
global x
x
global x
x
disp(x)
x = 19
printFun
global x
x = 19
printFun
x = 19
printFun
x = 19
printFun
gui
guide
help if
help strtostring
help strtoInteger
help StrToInteger
%-- 12/20/18  4:43 PM --%
%-- 12/21/18 11:36 AM --%
cls
clr
clear
cls
%-- 12/24/18  3:25 PM --%
%-- 12/25/18  1:44 PM --%
deploytool
mbuild -setup
cla
clear
%-- 12/25/18  2:28 PM --%
clear
%-- 12/25/18 11:10 PM --%
