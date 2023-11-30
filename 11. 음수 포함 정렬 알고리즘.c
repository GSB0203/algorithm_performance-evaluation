#include <stdio.h>
int main() {
	int n, i, j, temp;
	int a[101];
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	
	for(i=n-1;i>0;i--) {
		for(j=0;j<i;j++) {
			if(a[j]>0 && a[j+1]<0) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
		printf("%d ", a[i]);
	return 0;
}
