#include <stdio.h>

int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int lcm = n1*n2;
    
    int gcd = 0;
    while(true){
        int c=n1%n2;
        if(c==0){
            gcd = n2;
            break;
        }
        n1=n2;
        n2=c;
    }
    
    printf("%d %d", gcd, lcm/gcd);
}