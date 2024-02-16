#include<stdio.h>
#include <math.h>
int IsPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
            break;
        }
    }
    return 1;
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int mid=n/2;
    for(int i=1;i<=mid;i++){
        for(int j=(n-1);j>i;j--){
            if((i+j)==n){
                if(IsPrime(i)==1 && IsPrime(j)==1){
                    printf("\n%d  %d",i,j);
                }
                
                break;
            }
        }
    }
}