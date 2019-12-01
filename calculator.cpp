#include <stdio.h>
#include <math.h>

void gesan (double a, double b, double c, double flag, double x1, double x2) //근의 공식 대입
{
  /*
 flag(a,b,c) (근의 개수)에 따라
 flag=0 ->  근이 없을 경우는 x1과 x2에 값을 지정하지 않고 리턴
 flag=1 ->  근이 1개 (중근)을 가지므로 -0.5 (b/a)를 x1과 x2에 넣고 리턴
 flag=2 -> 근이 2개일경우 근의 공식에 넣은후 정수부분과 소수부분을 따로 분리
 */
  switch (flag (a,b,c)) {
    case flag(a,b,c)<0:
      flag=0;
      break;
    
    case flag (a,b,c)==0:
			flag=1;
			x1=gen1(a,b);
			x2=x1;
			break;
    case flag (a,b,c) > 0:
		goto next;
		break;
		
		default
		break;
		}
		
		
}

double flag (double a, double b, double c) {
		double k=pow (a,2)-4*a*c;
		return k
}

double gen1 (double a,double b)
{
	return -1*b/2*a
}
