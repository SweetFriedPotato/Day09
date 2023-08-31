#include<stdio.h>
int main() {
	//일반변수 선언 및 초기화
	int num = 10;
	//포인터변수 선언
	int* p;

	//포인터변수와 일반변수 연결
	p = &num;

	//int*p = &num;

	printf("num의 주소 %p\n", &num);
	printf("p의 주소 %p\n", p);
	printf("num의 값 %d\n", num);
	printf("p가 가리키는 값%d\n", *p);//간접참조연산자
}