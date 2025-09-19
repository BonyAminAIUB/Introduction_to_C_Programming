#include <stdio.h>
int main(){
    int n = 10;
    printf("%d\n",n);
    printf("%p\n",&n);
    int* ptr;
    ptr = &n;
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
    printf("%p\n",&ptr);
    printf("\n");
    *ptr = 20; // de reference
    printf("%d\n",n);
    return 0;
}