#include <stdio.h>

int main(){
    int n, a, total=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &a);
        int cnt=0;
        for(int j=1;j<=a;j++){
            if(a%j==0)    cnt++;
        }
        if(cnt==2)    total++;
    }
    printf("%d", total);
}