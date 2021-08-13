#include <stdio.h>

int main(){
    int people[55][2];
    int cnt[55]={0};
    int n, height, weight;
    
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        scanf("%d %d", &weight, &height);
        people[i][0]=weight;
        people[i][1]=height;
    }
    
    for(int i=1;i<=n;i++){
      int rank=1;
        for(int j=1;j<=n;j++){
            if(i!=j){
                if(people[i][0]<people[j][0] && people[i][1]<people[j][1]){
                  rank++;
                }
                cnt[i]=rank;
            }
        }
    }
    
    for(int i=1;i<=n;i++)    printf("%d ", cnt[i]);
    return 0;
}