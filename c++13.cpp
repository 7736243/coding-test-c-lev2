#include <stdio.h>
#include <string.h>

int main() {
  char data[55];
  int mytop, n;
  int mystack[55];
  
  scanf("%d", &n);
  for(int i=0;i<n;i++){
    mytop=0;
    scanf("%s", data);
    int len=strlen(data);
    
    for(int i=0;i<len;i++){
      if(data[i]=='('){
        mystack[mytop]=1;
        mytop++;
      }
      else{
        if(mystack[mytop-1]==1){
          mystack[mytop-1]=0;
          mytop--;
        }
        else{
          mystack[mytop]=2;
          mytop++;
        }
      }
    }
    if(mytop!=0)  printf("NO\n");
    else  printf("YES\n");
  }
  
  return 0;
}