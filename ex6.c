#include<stdio.h>

//�Լ�����
void modify(int *ptr) { //�������� �Ű�����
	*ptr = 200;
	printf("�Լ� %d\n", *ptr);
}

int main() {
	int num = 100;
	//�Լ�ȣ��
	modify(num);
	printf("�����Լ� %d\n", num);
}