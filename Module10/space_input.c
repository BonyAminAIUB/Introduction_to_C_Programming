#include <stdio.h>
int main(){
    char arr[10];
    //scanf("%s", &arr); // white space input ney nah
    //gets(arr); input neyar jonno
    //fgets(arr_name,size,stdin); fgets() enter ta keo input hisebe niye ney
    fgets(arr,10,stdin);
    printf("%s",arr);
    return 0;
}