#include<iostream>
using namespace std;

int main(){
    int arr[6]= { 1 , 4 ,2 ,5 ,7 , 3 };
    int n ;
    for (int i = 0; i < n; i++)
    {
        int minIndex = i ;

        for (int j = i+1 ; j < n ; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
            swap(arr[minIndex] , arr[i]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i] << endl;
    }
}