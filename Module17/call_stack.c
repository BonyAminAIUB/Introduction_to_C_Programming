#include <stdio.h>

void pello(){
    printf("Pello\n");
}
void mello(){
    printf("Mello\n");
    pello();
}
void hello(){
    printf("Hello\n");
    mello();
}
int main(){
    printf("Hi\n");
    hello();
    return 0;
}