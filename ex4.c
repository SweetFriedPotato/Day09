#include<stdio.h>
int main() {
	//�Ϲݺ��� ���� �� �ʱ�ȭ
	int num = 10;
	//�����ͺ��� ����
	int x = 10, y = 20;
	int* p;

	p = &x;
	printf("p = %p\n", p);
	printf("*p = %d\n", *p);

	p = &y;
	printf("p = %p\n", p);
	printf("*p = %d\n", &p);