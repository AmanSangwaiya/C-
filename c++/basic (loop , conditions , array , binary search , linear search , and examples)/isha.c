#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter the value of x:");
    scanf("%d"&x);
    printf("enter the value of y:");
    scanf("%d",&y);
    z=x;
    x=y;
    y=z;
    printf("the swapped value of x is %d",x);
    printf("the swapped value of y is %d", y);
    return 0;
}
