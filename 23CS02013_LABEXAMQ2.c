#include<stdio.h>
#include<math.h>
int main(){
    int n,count,i,j,k,sum;
    count=0;
    printf("enter the number:");
    scanf("%d",&n);

    while(n>0)
    {  n= n/10;
    count++;
    }

    int dig[count];
    i=0;
    while(i<count)
    { 
      dig[i]=n%10;
      n=n/10;
      i++;
    }
    for(j=count-1;j>=0;j--)
    {  
        for(k=1;k<dig[j];k++)
        {
            dig[j]=dig[j]*k;
        }
    }
     sum=0;i=0;
    while(i<count)
    {
    sum+=dig[i];
    i++;
    }
    if(sum=n)
    {
        printf("the number is strong number");
    }
    else
    {
        printf("the number is not a strong number");
    }
    return 0;

}