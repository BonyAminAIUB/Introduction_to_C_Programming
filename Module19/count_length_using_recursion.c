#include <stdio.h>

int count_length(char s[],int i){
    if(s[i] == '\0'){
        return 0;
    }
    int count = count_length(s,i+1);
    return count+1;
}

int main(){
    char s[201];
    fgets(s,201,stdin);
    int val = count_length(s,0);   
    printf("%d ",val);
    return 0;
}