#include <stdio.h>

int main(){
    while(1){
        int c[5]={0};
        scanf("%d %d %d", &c[0], &c[1], &c[2]);
        if(c[0]==0 && c[1]==0 && c[2]==0)    break;
        
        for(int i=0;i<3;i++){
          for(int j=i+1;j<3;j++){
            if(c[i]>c[j]){
              int temp = c[i];
              c[i]=c[j];
              c[j]=temp;
            }
          }
        }
        
        if(c[0]*c[0] + c[1]*c[1] == c[2]*c[2])    printf("right\n");
        else    printf("wrong\n");
    }
}