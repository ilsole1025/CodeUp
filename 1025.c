//1025
//다섯자리의정수 하나를 입력받아 각 자리별로 구분해 출력한다.

#include<stdio.h>

void main(void) {


	int a, b, c, d, e;
	scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e); // 입력받는 숫자를 1개씩 잘라 a,b,c,d,e 변수에 저장

	printf("[%d]\n", a * 10000);
	printf("[%d]\n", b * 1000);
	printf("[%d]\n", c * 100);
	printf("[%d]\n", d * 10);
	printf("[%d]\n", e);
}