#include<stdio.h>
void swap(int a, int b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	//�� ������ swap �˰���
	int a = 10, b = 20, tmp;
	printf("swap before: %d %d\n", a, b);
	//swap �˰���
	swap(a, b);
	printf("swap after: %d %d\n", a, b);
}