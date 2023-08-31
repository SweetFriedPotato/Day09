#include<stdio.h>
void swap(int *pa, int *pb) {
	int tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main() {
	//두 정수의 swap 알고리즘
	int a = 10, b = 20, tmp;
	printf("swap before: %d %d\n", a, b);
	//swap 알고리즘
	swap(&a, &b);
	printf("swap after: %d %d\n", a, b);
}