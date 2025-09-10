#include <stdio.h>
int main(){
    for(int i = 1; i<=10; i=i+2){
        printf("%d\n",i);
    }
    printf("\n");

    for(int i = 10; i>=1; i--){
        printf("%d\n",i);
    }
    printf("\n");

    for(int i = 2; i<=200; i=i*2){
        printf("%d\n",i);
    }
    printf("\n");

    return 0;
}