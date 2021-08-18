#include <stdio.h>
#include <string.h>

int main(){
    int c[100005]={0};
    int k, now=0, a, sum=0;
    
    scanf("%d", &k);
    for(int i=0;i<k;i++){
        scanf("%d", &a);
        if(a!=0){
            c[now]=a;
            now++;
        }
        else{
            c[now-1]=0;
            now--;
        }
    }

    for(int i=0;i<now;i++){
        sum+=c[i];
    }
    
    printf("%d", sum);
}