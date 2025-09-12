#include <stdio.h>
//#include <limits.h> INT_MIN er jonno
int main(){
    int n;
    int max = 0;
    //int max = INT_MIN; eta sob cheye choto value and vice versa INT_MAX
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        int val;
        scanf("%d",&val);
        if(max < val){
            max = val;
        }
    }
    printf("%d",max);
    return 0;
}