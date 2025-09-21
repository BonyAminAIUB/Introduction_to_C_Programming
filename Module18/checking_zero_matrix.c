#include <stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int total = r*c;
    int zero = 0;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            if(arr[i][j] == 0){
                zero ++;
            }
        }
    }
    if(zero == total){
        printf("This is a zero matrix\n");
    }
    else{
        printf("This is not a zero matrix\n");
    }
    return 0;
}