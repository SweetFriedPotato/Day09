#include<stdio.h>
int main() {
	//�Ϲݺ��� ���� �� �ʱ�ȭ
	int num = 10;
	//�����ͺ��� ����
	int* p;

	printf("num%d\n", num);
	printf("p %d\n", *p);

	//�����ͺ����� �� ����
	*p = 20;
	printf("num%d\n", num);
	printf("p %d\n", *p);