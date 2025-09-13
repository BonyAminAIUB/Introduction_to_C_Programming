#include <stdio.h>
int main(){
    int arr[10];
    //scanf("%d",&arr[0]);
    //printf("%d",arr[0]);
    for(int i = 0; i<10; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i<10; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}