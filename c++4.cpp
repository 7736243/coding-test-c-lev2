#include <stdio.h>

int main() {
  int n, startnum=2, endnum=7, count=1;
  
  scanf("%d", &n);
  
  if(n==1)  printf("1");
  else{
    while(true){
      if(startnum<=n && n<=endnum){
        printf("%d", count+1);
        break;
      }
      else{
        count++;
        startnum+=(6*(count-1));
        endnum=startnum+((6*count)-1);
      }
    }
  }
  
  return 0;
}