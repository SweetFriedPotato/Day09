#include<stdio.h>
int main() {
	char a = 'A';
	int b = 100;
	double c = 95.5;
	printf("a에 저장된 변수의 값: %c\n", a);
	printf("b에 저장된 변수의 값: %d\n", b);
	printf("c에 저장된 변수의 값: %d\n", c);

	printf("a의 주소: %p\n", &a);
	printf("b의 주소: %p\n", &b);
	printf("c의 주소: %p\n", &c);

}