#include <stdio.h>

int main(void) {

	long long int a, b,c;
	scanf("%lld %lld %lld", &a, &b,&c);
	printf("%lld\n%.1f", a+b+c, ((float)a+(float)b+(float)c)/3);
	return 0;
}