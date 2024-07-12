#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ord[n+1];
    int i,j;
    int cnt=1;
    for(i=0;i<=n;i++){
        ord[i]=0;
    }
    int N;
    N=n;
    while(N){
        int sign;
        int loc;
        scanf("%d",&sign);
        if(sign==2){
            scanf("%d",&loc);
            for(i=n-1;i>=cnt;i--){
                ord[i+1]=ord[i];
            }
            ord[cnt]=loc;
        }
        if(sign==1){
            cnt++;
        }
        if(sign==3){
            for(i=cnt;i<n;i++){
                ord[i]=ord[i+1];
            }
        }
        N--;
    }
    for(i=0;i<n;i++){
        if(ord[i]!=0)
            printf("%d ",ord[i]);
    }
    printf("\n");
}