#include <stdio.h>

void sum(int i){
    if(i == 6){
        return;
    }
    printf("%d\n",i);
    sum(i+1);
}

int main(){
    int i = 1;
    sum(i);
    return 0;
}