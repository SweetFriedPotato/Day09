#include<stdio.h>
int main() {
	//일반변수 선언 및 초기화
	int num = 10;
	//포인터변수 선언
	int x = 10, y = 20;
	int* p;

	p = &x;
	printf("p = %p\n", p);
	printf("*p = %d\n", *p);

	p = &y;
	printf("p = %p\n", p);
	printf("*p = %d\n", &p);