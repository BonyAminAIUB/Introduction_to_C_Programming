#include <stdio.h>

void sum(int i){
    if(i == 0){
        return;
    }
    printf("%d\n",i);
    sum(i-1);
}

int main(){
    int i = 5;
    sum(i);
    return 0;
}