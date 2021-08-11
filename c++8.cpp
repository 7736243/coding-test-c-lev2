#include <stdio.h>

int main(){
    int n, k3=0, k5=0;
    
    scanf("%d", &n);
    
    if(n%3==0)    k3=n/3;
    
    int maxnum = n/5;
    while(1){
      if(maxnum==0) break;
      
      int now = n;
      int total = 0;
      now -= maxnum*5;
      
      if(now%3==0){
        total += maxnum;
        total += now/3;
        k5 = total;
        break;
      }
      else  maxnum--;
    }
    
    if(k3==0 && k5==0)  printf("-1");
    else if(k3==0 || k5==0){
      if(k3==0) printf("%d", k5);
      else  printf("%d", k3);
    }
    else{
      if(k5<=k3)  printf("%d", k5);
      else  printf("%d", k3);
    }
}