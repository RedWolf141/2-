import re
import math

def getEqubation_1():
    a, b= float(input("ax+b=0 의 형태 일차방정식을 입력해주세요.")), float(input(""))

demension=int(input("차수를 입력해주세요"))

if (demsion==1):
    pass
elif (demsion==2):
    pass
elif (demsion==3):
    pass
else:
    print("잘못된 입력값입니다")
/*
#include <stdio.h>

double eq_helper(double a, double b, double c)
{
	return b*b-4*a*c;
}

double linear_equation(double a, double b) {
	return -1*b/a;
}

void cube_equbation(double a, double b, double c) 
{
	cube_x1 = (-1*b + sqrt(eq_helper(a,b,c)))/2*a
	cube_x2 = (-1*b - sqrt(eq_helper(a,b,c)))/2*a
}
/*

Linear equation:1차 방정식
ax+b = 0
x = -b/a

cube equbation : 2차 방정식
ax^2 + bx + c = 0

x = -b/2a +/- sqrt(b^2+4ac)/2a

*/
