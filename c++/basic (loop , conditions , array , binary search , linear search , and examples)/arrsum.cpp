#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int addition = 0;
int size;
cin>>size; 
int sum[100];

int add ( int sum[] , int size ){

    for (int i = 0; i < size  ; i++)
    {
        addition = sum[size] + addition ;
    }
    return addition ;
}

int main(){
   
    for (int i = 0; i < size; i++)
    {
        cin>>sum[i];
    }
    cout<<"sum of all the elements of array is " , add ( sum[] , size)<<endl;
}
