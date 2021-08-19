#include <stdio.h>

int main(){
    int c[10005]={0};
    
    int n, num;
    
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &num);
        c[num]++;
    }
    
    for(int i=0;i<10005;i++){
        if(c[i]==0)    continue;
        
        for(int j=0;j<c[i];j++)    printf("%d\n", i);
    }
}