#include <stdio.h>

void array(char c[],int n){
    printf("%s ",c);
    printf("\n");
    c[1] = 'a'; // de reference
}

int main(){
    int n; 
    scanf("%d",&n);
    char c[n];    
    //scanf("%s ",&c); or
    scanf("%s ",c);
    array(c,n);
    printf("%s",c);
    return 0;
}