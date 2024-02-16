#include<stdio.h>
int main(){
    float r,v,s;
    printf("enter the radius of the sphere:");
    scanf("%f",&r);
    v=((4*3.14*r*r*r)/3);
    printf("\n the volume of the sphere is%.2f",v);
    s=(4*3.14*r*r);
    printf("\n the surface area of the sphere is%.2f",s);
    return 0;
}