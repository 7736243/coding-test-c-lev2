#include <stdio.h>

int arr[105]={0};
int result[105]={0};
bool check[105];
int n, maxnum, maxtotal, cnt=0;

void getresult(int index){
    if(cnt>=3){
        int sum=0;
        for(int i=0;i<3;i++){
          sum += result[i];
        }
        if(sum<=maxnum && sum>maxtotal){
          maxtotal = sum;
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(check[i]==false){
                result[index]=arr[i];
                check[i]=true;
                cnt++;
                getresult(index+1);
                
                check[i]=false;
                cnt--;
                result[index]=0;
            }
        }
    }
}

int main(){
    scanf("%d %d", &n, &maxnum);
    
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    
    getresult(0);
    
    printf("%d", maxtotal);
}