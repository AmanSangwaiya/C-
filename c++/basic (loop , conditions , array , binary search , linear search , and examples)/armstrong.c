#include<stdio.h>
#include<math.h>

int numofdigit(int n){
    int r = 0;
    while (n>0)
        {
            r=r+1;
            n=n/10;
        }
        return r;
    } 


int armstrong(int n){
    int sum = 0;
    int temp = n;
    int digits = numofdigit(n);
    while (n>0)
    {
        
            int k = n/10;
            sum = sum + pow(k , digits);
            n=n/10;
    }
    return sum = temp;
}
int main(){
    int n ;
    printf ("Enter the value of n ");
    scanf ("%d", &n);
    
     if (armstrong(n))
             {
                printf("the number is armstrong number");
             }
             else{
                printf("the number is not a armstrong number");
             }

    }  

