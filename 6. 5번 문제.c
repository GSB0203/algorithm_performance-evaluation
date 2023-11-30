#include <stdio.h>
int main() {
	char a[20];
	int year, age, i;
	scanf("%s", a);
	
	if(a[7] == '1' || a[7]  == '2') year = 1900 + ((a[0] - '0') * 10 + (a[1] - ' 0'));
	else year = 2000 + ((a[0] - '0') * 10 + (a[1] - ' 0'));
	
	age = 2019 - year + 1;
	if(a[7] == '1'|| a[7] == '3') printf("%d M", age);
	else printf("%d W", age);
}