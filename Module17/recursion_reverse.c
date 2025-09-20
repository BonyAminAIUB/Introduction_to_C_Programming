#include <stdio.h>

void sum(int i){
    if(i == 6){
        return;
    }
    sum(i+1);
    printf("%d\n",i);
}

int main(){
    int i = 1;
    sum(i);
    return 0;
}