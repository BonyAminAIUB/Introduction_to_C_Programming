// return_type + parameter
#include <stdio.h>

int sum(int num1, int num2){
    int ans = num1 + num2;
    return ans;
}

int sub(int num1, int num2){
    int ans = num1 - num2;
    return ans;
}

int main(){
    int val = sum(10,5);
    printf("%d\n",val);
    int val2 = sub(200,50);
    printf("%d\n",val2);

    int a,b;
    scanf("%d %d",&a,&b);
    int val3 = sum(a,b);
    printf("%d\n",val3);
    return 0;
}