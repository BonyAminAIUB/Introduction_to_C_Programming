// no return_type + parameter
#include <stdio.h>

void sum(int num1, int num2){
    int ans = num1 + num2;
    // return (likhle ei line por ar kaj korbe nah orthat break er moto kaj korbe)
    // sora sori main function a chole jabe
    printf("%d",ans);
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}