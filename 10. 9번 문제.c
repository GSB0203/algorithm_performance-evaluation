#include <stdio.h>
int main() {
	int n, i, student[1001], max = 0, count = 0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &student[i]);
	
	max = student[n - 1];
	
	for(i=n-2;i>=0;i--) {
		if(student[i] > max) {
			max = student[i];
			count += 1;
		}
	}
	
	printf("%d", count);
	return 0;
}
