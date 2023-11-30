#include<stdio.h>
int a[60], b[60];

int main() {
	char str[101];
	int i;
	scanf("%s",str);
	
	for(i=0;str[i]!='\0';i++) {
		if(str[i] >= 'A' && str[i] <= 'Z') a[str[i]-64]++;
		else a[str[i]-70]++;
	}
	
		scanf("%s",str);
	
	for(i=0;str[i]!='\0';i++) {
		if(str[i] >= 'A' && str[i] <= 'Z') b[str[i]-64]++;
		else b[str[i]-70]++;
	}
	
	for(i=1;i<=52;i++) {
		if(a[i] != b[i]) {
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}