#include <stdio.h>
#include <stdbool.h>

int main(){
    printf("Hello\n"); //Hello
    int num1 = 20;
    long long int num2 = 10000000000;
    float f = 2.5;
    double d = 34234.3452346;
    char c = '@';
    bool b = true;
    printf("%d",num1); //20
    printf("\n%lld",num2); //10000000000
    printf("\n%.2f",f); //2.50
    printf("\n%lf",d); //34234.3452346
    printf("\n%c",c); //@
    printf("\n%d",b); //1
    return 0;
}