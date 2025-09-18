#include <stdio.h>
int a = 10; // global variable

int sum(){
    printf("%d\n",a);
}

int main(){
    printf("%d\n",a);
    sum();
    return 0;
}