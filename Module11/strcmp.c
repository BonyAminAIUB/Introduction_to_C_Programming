#include <stdio.h>
int main(){
    char a[101],b[101];
    // scanf("%s %s",&a,&b);  
    // printf("%d",strcmp(a,b));
    //output -1 hole a small, 0 hole equal, 1 hole b choto
    int val = strcmp(a,b);
    if(val < 0){
        printf("A is smaller");
    }
    else if(val > 0){
        printf("B is smaller");
    }
    else if(val == 0){
        printf("A and B is equal");
    }
    return 0;
}