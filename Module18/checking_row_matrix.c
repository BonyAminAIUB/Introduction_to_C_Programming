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
    // if(r == 1){
    //     printf("This is a row matrix\n");
    // }
    // else{
    //     printf("This is not a row matrix\n");
    // }
    // if(c == 1){
    //     printf("This is a column matrix\n");
    // }
    // else{
    //     printf("This is not a column matrix\n");
    // }
    if(r == c){
        printf("This is a square matrix\n");
    }
    else{
        printf("This is not a square matrix\n");
    }
    return 0;
}