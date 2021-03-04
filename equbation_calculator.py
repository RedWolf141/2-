import re
import math

dimension = int(input("방정식의 차원을 입력하세요"))

if (dimension == 1):
    a, b = input('ax+b=0 의 형태를 입력하세요: ').split() # 공백을 기준으로 a,b를 입력
    a = int(a)
    b = int(b)
    try:
        answer = -b/a
    except ZeroDivisionError:
        print("일차항의 계수는 0이 아닌 실수여야 합니다")
    else:
        print("일차방정식의 해는", answer, "입니다")
  





