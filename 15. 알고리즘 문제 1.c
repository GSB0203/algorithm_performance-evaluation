#include <stdio.h>
int main() {
	char a[101]={0};
	int cnt[10]={0};
	int i, max = -1, index;
	scanf("%s", a);
	
	for(i=0;a[i] != '\0';i++) {
		cnt[a[i] - '0']++;
	}
	
	for(i=0;i<10;i++) {
		if(cnt[i] >= max) {
			max = cnt[i];
			index = i;
		}
	}
		
	printf("%d", index);
	
	return 0;
}
