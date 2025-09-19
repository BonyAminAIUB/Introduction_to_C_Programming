#include <stdio.h>

void array(int arr[],int n){
    for(int i = 0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    arr[1] = 15; // de reference
}

int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];    
    for(int i = 0; i<n; i++){
        scanf("%d ",&arr[i]);
    }
    array(arr,n);
    for(int i = 0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}