#include <stdio.h>

int main(){
    int apart[15][15]={0};
    int tk, k, n;
    
    for(int i=1;i<=14;i++){
        apart[0][i]=i;
    }
    
    for(int i=1;i<=14;i++){
        for(int j=1;j<=14;j++){
            for(int z=1;z<=j;z++){
                apart[i][j] += apart[i-1][z];
            }
        }
    }
    
    scanf("%d", &tk);
    for(int i=0;i<tk;i++){
        scanf("%d", &k);
        scanf("%d", &n);
        printf("%d\n", apart[k][n]);
    } 
}