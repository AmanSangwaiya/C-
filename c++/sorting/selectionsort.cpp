#include<iostream>
using namespace std;
int main(){

int size ;
cout<<"enter the size of array"<<endl;
cin >> size;
int arr[size];
for (int i = 0; i < size; i++)
{
    cout<<"enter a number"<<endl;
    cin>>arr[i];
}
for (int i = 0; i < size - 1 ; i++)
{
    int minIndex = i;

    for (int j = i+1 ; j < size; j++)
    {
        if (arr[j] < arr[minIndex])
        
            minIndex = j ;
        
        
    }
    swap(arr[minIndex] , arr[i]);
}
cout << " the sorted array is " << endl;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i];
  }
  return 0;
}