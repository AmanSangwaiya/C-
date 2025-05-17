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
for (int i = 0; i < size ; i++)
{
    for (int j = 0; j < size - 1; j++)
    {
        if (arr[j+1]<arr[j])
        {
            swap(arr[j] , arr[j+1]);
        }
    }
}
cout << " the sorted array by bubble sorting  is " << endl;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i];
  }
  return 0;
}