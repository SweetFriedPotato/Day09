#include<stdio.h>

//�Լ�����
void modify(int num) {
	num = 200;
	printf("�Լ� %d\n", num);
}

int main() {
	int num = 100;
	//�Լ�ȣ��
	modify(num);
	printf("�����Լ� %d\n", num);
}