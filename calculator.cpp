#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

void getEqubation_1();
void getEqubation_2();
void getEqubation_3();

double eq_helper(double a, double b, double c);
struct information
{
	int demension; // 방정식의 최고차항의 지수
	int key_1; // 1차 방정식 해의 개수
	int key_2;// 2차 방정식 해의 개수
	int key_3; //3차 방정식 해의 개수
	
	double input_x1;
	double input_x2;
	double input_x3;
	char error[40];
}equbation;
/*
error 모음집
 //SDE= set Dememsion Error 1차, 2차 3차 이외의 차수가 입력됬을때
 CHZ=Coefficient of highest order term is Zero 최고차항의 계수가 0
 IR=Imaginary Root 
 */
struct key
{
	double x1;
	double x2;
	double x3;
}answer;

/* 방정식의 형태
1차 ax+b=0
2차 ax^2+bx+c=0
3차 ax^3+bx^2+cx+d=0
1차-> 
x=-b/a (a!=0)
2차->
근의 공식 활용
3차
f(X)=(x-a)Q(x)형태로 조립제법
*/

int main()
{
	printf("차수를 입력해주세요");
	scanf("%d",&equbation.demension);

	switch (equbation.demension) {
		case 1:
			getEqubation_1();
			break;
		case 2:
			getEqubation_2();
			break;
		case 3:
			getEqubation_3();
			break;
		default:
			strcpy(equbation.error,"SDE"); //SDE= set Dememsion Error
			break;


	}


	
}

void getEqubation_1()
{
	printf("ax+b=0 의 형태 일차방정식을 입력해주세요.");
	scanf("%d %d", &equbation.input_x1,&equbation.input_x2);
	double a = equbation.input_x1;
	double b = equbation.input_x2;

	if (equbation.input_x1 == 0) {
		strcpy(equbation.error,"CHZ");
	}

	else {
		answer.x1=-b/a;
		printf("방정식의 해는 = %lf", answer.x1);
	}
	
}

void getEqubation_2()

{
	
	printf("ax^2+bx+c=0 의 형태 일차방정식을 입력해주세요.");
	scanf("%lf %lf %lf", &equbation.input_x1,&equbation.input_x2, &equbation.input_x3);
	double a = equbation.input_x1;
	double b = equbation.input_x2;
	double c = equbation.input_x3;
	
	if (equbation.input_x1 == 0) {
		printf("잘못된 입력값입니다");
	}

	else if (eq_helper(a,b,c)<0 ) // 2차방정식의 근의 개수가 0일경우 ( 허근) 
	
	{
		printf("근이 없습니다"); 
	}
	
	else 
	{
		answer.x1=(-b+sqrt(b*b-4*a*c))/2*a;
		answer.x2=(-b-sqrt(b*b-4*a*c))/2*a;
		printf("%lf %lf", answer.x1, answer.x2);
	}
	
	
}


void getEqubation_3()
{

getEqubation_2();
//추가 예정
}

double eq_helper(double a, double b, double c)
{
	return b*b-4*a*c;
}
