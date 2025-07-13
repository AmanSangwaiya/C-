#include<iostream>
using namespace std;

void ok(){
    int n;
    cin >> n;
    if(n%2 == 1){
        cout <<"YES"<< endl;
    }
    else{
        cout << "NO " << endl;
    }
}
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        ok();
    }
}