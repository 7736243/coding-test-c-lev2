#include <stdio.h>

int main(){
    int a, b, v, day;
    scanf("%d %d %d", &a, &b, &v);
    
    if((v-b)%(a-b)!=0)    day = (v-b)/(a-b)+1;
    else    day = (v-b)/(a-b);
    
    printf("%d", day); 
}