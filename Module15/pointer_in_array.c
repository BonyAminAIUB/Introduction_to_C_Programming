#include <stdio.h>
int main(){
    int arr[5] = {10,20,30,40,50};
    printf("%p\n",&arr[0]);
    printf("%p\n",arr);
    printf("%d\n",*arr);
    *arr = 100; // de reference 
    *(arr+2) = 300;
    for(int i = 0; i<5; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}