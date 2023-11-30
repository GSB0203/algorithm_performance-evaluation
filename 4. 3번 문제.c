#include<stdio.h>

int main() {
	int n, i, sum = 1;
	scanf("%d", &n);
	if(n == 1) return 0;
	else printf("1 ");
	
	for(i=2;i<=n/2;i++) {
		if(n%i == 0) {
			sum += i;
			printf("+ %d ", i);
		}
	}
	printf("= %d", sum);
}