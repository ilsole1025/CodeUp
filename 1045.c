#include <stdio.h>

int main(void) {

	long long int a,b;
	scanf("%lld %lld", &a,&b);
	printf("%lld\n%lld\n%lld\n%lld\n%lld\n%.2f", a+b,a-b,a*b,a/b,a%b,(float)a/(float)b);
	return 0;
}