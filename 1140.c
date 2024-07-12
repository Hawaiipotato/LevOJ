#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<string.h>
#define N 100

int main(){
    int n,x,y,i,j,p,q,t,s;
    char a[N]={'0'};
    while(scanf("%s",&a) != EOF){
        int b[N];
        int c[N];
        x=0;
        while(a[x]){
            x++;
        }
        
        for(i=0,j=x-1;j>=0;i++,j--){
        
            b[i]=a[j]-'0';
            c[i]=a[j]-'0';
            
        }
        y=1;
        for(i=2;i<=x;i++){
            n=0;
            t=0;
            for(j=0;j<x;j++){
                s=c[j]*i+t;
                b[j]=s%10;
                t=s/10;
                
            }
            
            if(t != 0){
                t=0;
                break;
                
            }
            for(j=0;j<x;j++){
                if(c[0]==b[j]){
                    n=1;
                    for(p=1,q=j+1;p<x && q<x;p++,q++){
                        if(c[p] == b[q]){
                            n++;
                        }
                        else{
                            n=0;
                            break;
                        }
                    }
                    if(n<x && n>0){
                        for(p=n,q=0;p<x && q<j;p++,q++){
                            if(c[p] == b[q]){
                                n++;
                            }
                        }
                    }
                    if(n==x){
                        y++;
                    } 
                }
            }
        }
        
        if(y==x){
            printf("%s is cyclic\n",a);
        }
        else{
            printf("%s is not cyclic\n",a);
        }
        char a[N]={'0'};
    
    }
    
    return 0;
}