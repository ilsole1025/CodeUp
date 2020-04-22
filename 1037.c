/*s는 문자열; 문자가 여러개인것이고
c는 문자; 문자 딱 하나만 있는것입니다
c는 가끔 아스키코드로 변환할때 쓰이기도 합니다*/

#include<stdio.h>
int main(void) {

	int a;
	scanf("%d", &a);
	printf("%c", a);

	return 0;
}