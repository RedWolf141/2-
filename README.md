# 방정식 계산기

프로젝트 계획이유
>항상 중학교 시절에 여러 방정식들을 풀어오며, 이 방정식들을 프로그램화 시켜서 하나의 알고리즘화 시켜
>손쉽게 풀 수 있도록 시도하기 위해서 만들었습니다
---------


## 일차방정식 계산기 사용방법
  + 입력 형태
    1. 1차방정식
    ```
    scanf("%d %d", &equbation.input_x1,&equbation.input_x2);
    ```
    2. 2차방정식
    ```
    scanf("%lf %lf %lf", &equbation.input_x1,&equbation.input_x2, &equbation.input_x3);
    ```
## 방정식 계산기 모듈설명
--------
``` C
void getEqubation_1()
{
	printf("ax+b=0 의 형태 일차방정식을 입력해주세요.\n");
	scanf("%d %d", &equbation.input_x1,&equbation.input_x2);
	double a = equbation.input_x1;
	double b = equbation.input_x2;

	if (equbation.input_x1 == 0) {
		strcpy(equbation.error,"CHZ");
	}

	else
	{
		answer.x1=-b/a;
		printf("방정식의 해는 = %lf", answer.x1);
	}
	
}

1. 방정식의 형태를 입력받기. 
  +int 형 이외의 숫자가 들어오면 에러출력 (추가 예정)
 
```
