#include <stdio.h>
int main(){
    int pass;
    while(scanf("%d",&pass)!= EOF)
    //  while(scanf("%d",&pass)) ,same as line 4
    // for(;cin >> x;) ,same as line 4
    {
        if(pass == 1999){
            printf("Correct");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }  
    return 0;
}