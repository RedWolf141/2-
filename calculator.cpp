#include <stdio.h>
#include <math.h>

void gesan (double a, double b, double c, double flag, double x1, double x2) //근의 공식 대입
{
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
