#include <stdio.h>

void print_digit(int n){
    if(n == 0){
        return;
    }
    print_digit(n / 10);
    int last_digit = n % 10;
    printf("%d ",last_digit);
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n == 0){
            printf("0");
        }
        print_digit(n);
        printf("\n");
    }
    return 0;
}