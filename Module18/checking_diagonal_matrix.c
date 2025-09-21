#include <stdio.h>
#include <stdbool.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            scanf("%d ",&arr[i][j]);
        }
    }
    bool is_diagonal = true;
    if(r != c){ // check square matrix or not
        for(int i = 0; i<r; i++){
            for(int j = 0; j<c; j++){
                if(i != j){
                    if(arr[i][j] != 0){
                        is_diagonal = false;
                        printf("NO");
                    }
                }
            }
        }
        if(is_diagonal == true){
            printf("YES");
        }
    }
    else{
        printf("NO");
    }
    return 0;
}