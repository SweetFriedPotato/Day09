#include<stdio.h>
void swap(int *pa, int *pb) {
	int tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main() {
	//�� ������ swap �˰���
	int a = 10, b = 20, tmp;
	printf("swap before: %d %d\n", a, b);
	//swap �˰���
	swap(&a, &b);
	printf("swap after: %d %d\n", a, b);
}