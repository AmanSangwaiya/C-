#include<iostream> 
using namespace std;
int main(){
    cout<<"Enter the number"<<endl;
    int n;
    int r;
    int sum = 0;
    cin >> n;
    while(n>0){
        r=n%10;
        sum = sum + r ;
        n= n/10;
    }
    cout << "the sumof the digits is  "<< sum << endl;
}
