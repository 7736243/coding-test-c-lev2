#include <stdio.h>

int main(){
    int x, y, w, h;
    
    scanf("%d %d %d %d", &x, &y, &w, &h);
    
    int i=0;
    
    while(1){
        i++;
        if(x-i==0 || x+i==w)    break;
        else if(y-i==0 || y+i==h)    break;
    }
    printf("%d", i);
}