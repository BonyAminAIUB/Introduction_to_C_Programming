#include <stdio.h>

void print_reverse_array(int arr[],int n,int i){
    if(i == n){
        return;
    }
    print_reverse_array(arr,n,i+1);
    printf("%d ",arr[i]);
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d ",&arr[i]);
    }
    print_reverse_array(arr,n,0);
    return 0;
}