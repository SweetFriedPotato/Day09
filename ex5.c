#include<stdio.h>

//함수정의
void modify(int num) {
	num = 200;
	printf("함수 %d\n", num);
}

int main() {
	int num = 100;
	//함수호출
	modify(num);
	printf("메인함수 %d\n", num);
}