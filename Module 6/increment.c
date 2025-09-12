#include <stdio.h>
int main(){
    int x = 10;
    int y = x++;
    int z = ++y;
    printf("%d\n",z++);
   

    int x1 = 10;
    ++x1;
    printf("%d",++x1);
    return 0;
}