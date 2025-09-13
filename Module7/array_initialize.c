#include <stdio.h>
int main(){
    int arr[10] = {1,2,3,4,5};
    int arr1[5] = {0};
    for(int i = 0; i<10; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i = 0; i<5; i++){
        printf("%d ",arr1[i]);
    }
    return 0;
}