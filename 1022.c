//CodeUp 1022

#include <stdio.h>
int main(void){
	char data[2001]; // �ִ� 2000���ڱ��� data[]������ ����,��°���
//a[51]�� �ִ� 50���ڱ����� �� �ܾ �����ϰ� ����� �� �ִ�
	fgets(data, 2000, stdin);//stdin�� Ű����! fgets �Լ��� scanf�� �ٸ��� ���Ⱑ �ִ� ���ڿ��� �������ִ� �Լ��̴�.
	printf("%s", data);
	return 0;
}