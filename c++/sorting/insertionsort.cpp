#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter value of n "<<endl;
    cin >> n ;
    int arr[n];
for (int i = 0; i < n; i++)
{
    cout<<"enter a number"<<endl;
    cin>>arr[i];
}
 for (int i = 1; i < n; i++)
{
    int j ;
    int temp = arr[i];
    for (j = i-1 ; j>=0; j--)
    {
        if (arr[j] > temp)
        {
            arr[j+1] = arr[j];
            
        }
        else{
            break;
        }
        
    }
    arr[j+1]=temp;
}
cout<<"the sorted array after using insertion sort is " <<endl;
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<endl;
}
return 0;
}
