#include <stdio.h>
int main(){
    char a[5] = {'B','o','n','y','\0'};
    //char a[5] = {'B','o','n','y'}; same as line 3
    char b[5] = "Amin";
    printf("%s\n",a);
    printf("%s",b);
    return 0;
}