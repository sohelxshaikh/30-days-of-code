// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    
    int n = 4;
    for(int i =  0; i <5 ; i++){
        for(int j = n-i-1 ;j >=0 ; j--){
            cout<<" ";
        }
        for(int p = 1 ; p <= 2*i +1 ; p++){
            cout<<"*";
        }
        for(int j = n-i-1  ;j>=0 ; j--){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
