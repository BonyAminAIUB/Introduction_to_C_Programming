#include <stdio.h>
//#include <string.h>
int main(){
    char s[20];
    fgets(s,20,stdin);
    int size = strlen(s);
    printf("%d",size);
    return 0;
}