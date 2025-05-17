#include <iostream>
using namespace std;

int getMax(int num[], int n){
     
     
    int max = num[0];

    for (int i = 0; i < n; i++)
    {
        if (num[i]>max)
        {
            max=num[i];
        }
        //returning max value
        
    }
    return max;
}

int getMin(int num[], int n){
   
    
    int min= num[0];

    for (int i = 0; i < n; i++)
    {
        if (num[i]<min)
        {
            min=num[i];
        }
        //returning min value
       
    }
    return min;
}

int main(){
    int size;
    cin>>size;
    int num[100];

    for(int i=0; i<size; i++){
        cin>>num[i];
    }

    cout<<"Maximum value of array is: " <<getMax(num,size) <<endl;
    cout<<"Minimum value of array is: " <<getMin(num,size) <<endl;
}