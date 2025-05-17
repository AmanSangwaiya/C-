#include<iostream>
using namespace std;

bool isPossible(int stalls , int k  , int mid){
    int cowCount = -1 ; 
    int lastPos = stalls[0];

    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount==k)
            {
                return true; 
            }
            lastPos = stalls[i];
        }
        
    }
    return false;
}

int aggresiveCows(int stalls , int k)
{
    sort(stalls.begin() , stalls.end());

    int s = 0 ; 
    int maxi = 
}