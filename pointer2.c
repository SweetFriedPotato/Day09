#include<stdio.h>
int main() {
	//�Ϲݺ��� ���� �� �ʱ�ȭ
	int num = 10;
	//�����ͺ��� ����
	int* p;

	//�����ͺ����� �Ϲݺ��� ����
	p = &num;

	//int*p = &num;

	printf("num�� �ּ� %p\n", &num);
	printf("p�� �ּ� %p\n", p);
	printf("num�� �� %d\n", num);
	printf("p�� ����Ű�� ��%d\n", *p);//��������������
}