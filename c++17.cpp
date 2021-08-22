#include <stdio.h>

int cal(int i){
    int sum=1;
    
    while(i>0){
        sum*=i;
        i--;
    }
    
    return sum;
}

int main(){
    int n1, n2;
    
    scanf("%d %d", &n1, &n2);
    
    printf("%d", cal(n1)/(cal(n2)*cal(n1-n2)));
}