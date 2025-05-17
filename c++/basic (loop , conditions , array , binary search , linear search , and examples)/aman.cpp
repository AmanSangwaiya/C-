#include<iostream>
using namespace std;

int main(){
    cout << "NAMASTE INDIA" <<endl;

    int n ;
    cin >> n ;

    int i = 1;

    while(i <= n ){
    cout << "hello madam kya hal hai??" <<endl;

    if(i<n){
        cout << "*" ;
    }
    else{
        cout << "**" ;
    }
    i=i+1;
    }
    
}