//CodeUp 1022

#include <stdio.h>
int main(void){
	char data[2001]; // 최대 2000문자까지 data[]공간에 저장,출력가능
//a[51]에 최대 50글자까지의 한 단어를 저장하고 출력할 수 있다
	fgets(data, 2000, stdin);//stdin은 키보드! fgets 함수는 scanf와 다르게 띄어쓰기가 있는 문자열도 받을수있는 함수이다.
	printf("%s", data);
	return 0;
}