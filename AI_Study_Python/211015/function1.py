"""
터미널 명령어
dir : 현재 디렉토리 내용보기
cd [폴더명] : 폴더 변경
python a.py : a.py 실행
python : 인터렉티브 shell 모드 실행
cls : 현재 화면 깨끗하게 정리
ctrl + c : 실행프로그램 강제 종료
ps : 현재 실행중인 프로세스 목록 표시
"""


def greet1():
    print("반갑습니다.")
    print("파이썬의 세계로 오신 것을 환영합니다.")


greet1()

'''
>>> def greet():
...     print("Hello World!")
...     print("Welcome To The Python!")
...
>>> greet()
Hello World!
Welcome To The Python!
'''


def greet2(name, age):
    print(name, "님 안녕하세요.")
    print(age, "살 입니다.")


greet2('John', 20)

'''
>>> def greet2(name, age):
...     print(name, ", hello.")
...     print(age, "years old.")
...
>>> greet2('John', 20)
John , hello.
20 years old.
'''
