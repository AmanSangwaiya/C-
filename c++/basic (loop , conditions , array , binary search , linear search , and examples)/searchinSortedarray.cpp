#include<iostream>
using namespace std;

int getPivot (int arr[] , int n  ){

    int s =0 ;
    int e = n-1 ;
    int mid = s + (e-s)/2;

    while (s<e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid +1 ;
        }
        else{
            e= mid ;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int binarySearch (int arr[] , int n , int key ){
    int start = 0;
    int end = n-1;

    int  mid = start + (end-start)/2;

    while (start <= end ){
        if (arr[mid] == key){
            return mid;
        }
        //go to rght wala part
        if (key > arr[mid])
        {
            start= mid +1;
        }
        else{//key < arrr[mid]
            end = mid - 1;
        }
        mid = start + (end - start )/2;
    }
   return -1;
} 

int arr[]={ 1, 3 , 5 , 7 , 9};

int findPosition (int arr[] , int n , int k)
{
    int pivot = getPivot(arr , n );
    if (k >= arr[pivot] && k <= arr[n-1])
    {
        //BS on second line 
        return binarySearch ( arr , n-pivot , k , 0); 
    }
    else 
    {
        //BS on first line 
        return binarySearch ( arr , pivot , k , 0 );
    }
    
}