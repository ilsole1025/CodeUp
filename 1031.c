#include <stdio.h>
//10진수를 입력받아 8진수로 출력하는 프로그램을 작성해보자.
int main(void) {

	int a;
	scanf("%d", &a); // %d (10진수 형태)로 입력받고
	printf("%o", a); // %o 8진수(octal) 로 출력

	return 0;
}