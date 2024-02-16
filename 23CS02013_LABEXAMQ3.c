#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("enter the coefficients of the quadratic equation:");
    scanf("%d%d%d",&a,&b,&c);
    int d=((b*b)- 4*a*c);
    if(d>=0)
    {
        float x=((-b + sqrt(d))/2*a);
        float y=((-b -sqrt(d))/2*a);
        printf("the roots of the quadratic equation are:%f,%f",x,y);
    }
    else
    {
        printf ("the roots are imaginary");
    }
     return 0;
}