#include<stdio.h>
int main() {
	//일반변수 선언 및 초기화
	int num = 10;
	//포인터변수 선언
	int* p;

	printf("num%d\n", num);
	printf("p %d\n", *p);

	//포인터변수로 값 변경
	*p = 20;
	printf("num%d\n", num);
	printf("p %d\n", *p);