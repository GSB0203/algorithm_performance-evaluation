#include <stdio.h>
int main() {
    char s[10000]={};
    gets(s);
    for(int i=0;s[i]!='\0';i++) {
        if(s[i]==' ' || s[i]=='\n') continue;
        else if(s[i]<'a') printf("%c", s[i]+32);
        else printf("%c", s[i]);
    }
    return 0;
}
