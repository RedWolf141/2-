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
### 방정식 계산기 모듈설명
--------
# [ 방정식 입력 모듈]
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

```
# 1. 방정식 입력받기
	방정식에 숫자 이외의 문자가 입력될시 에러 출력 (추가예정)  
# 2. 방정식의 차수 구별하기.
# 3-1. 일차방정식  
	 일차항의 계수가 0이 아닌지 확인
# 3-2. 이차방정식  
	 이차항의 계수가 0이 아닌지 확인 
	 허근을 가지는지 확인
# 3-3. 삼차방정식  
	삼차항의 계수가 0이 아닌지 확인
		 인수를 찾아내어 (x-a)f(x)형태로 변환
		 이차방정식 함수를 다시 호출해 해를 구함
# 4. 해를 출력

***

## 추후 과정
---
코드를 Python으로 변환후에 GUI를 이용하여 콘솔에서 벗어난 하나의 응용 프로그램으로 발전 예정

---
참고 자료들
* MarkDown 사용법: <https://gist.github.com/ihoneymon/652be052a0727ad59601>
