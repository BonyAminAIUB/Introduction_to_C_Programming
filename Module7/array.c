#include <stdio.h>
int main(){
    int arr[5];
    arr[2] = 10;
    arr[3] = 100;
    arr[1] = 50;
    scanf("%d",&arr[4]);
    printf("%d",arr[4]);
    printf("%d",arr[2]);
    return 0;
}