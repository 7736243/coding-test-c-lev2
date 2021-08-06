#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    for(int i=1;i<=n;i++){
        int sum = 0;
        int now = i;
        
        while(now>0){
            sum+=(now%10);
            now/=10;
        }
        
        sum+=i;
        
        if(sum==n){
            printf("%d", i);
            return 0;
        }
    }
    printf("0");
    return 0;
}