#include <stdio.h>
int main(){
    int a = 10;
    int b = 2;
    float c = 15;
    int sum = a + b;
    printf("Summation is = %d\n",sum);
    int sub = a - b;
    printf("Subtraction is = %d\n",sub);
    int mul = a * b;
    printf("Multiplication is = %d\n",mul);
    float div = c / b;
    printf("Division is = %.2f\n",div);
    return 0;
}