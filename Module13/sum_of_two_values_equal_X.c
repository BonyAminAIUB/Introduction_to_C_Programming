#include <stdio.h>
int main(){
    int n,sum; 
    scanf("%d",&n);
    int arr[n];
    int flag = 0; // flag variable
    for(int i = 0; i<n; i++){
        scanf("%d ",&arr[i]);
    }
    scanf("%d",&sum);
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] + arr[j] == sum){
                flag = 1;
                printf("Yes"); 
            }
        }
    }
    if(flag == 0){
        printf("No"); 
    }
    return 0;
}