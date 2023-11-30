#include <stdio.h>
int main() {
	int n, age, max=0, min=999999;
	scanf("%d", &n);
	for(int i=0;i<n;i++) {
		scanf("%d", &age);
		if(max<age) max=age;
		if(min>age) min=age;
	}
	
	printf("%d", max-min);
	return 0;
}
