// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
   
    int n ;
    cin>>n;
    for(int i = 0 ; i <n ; i ++){
        for(int j = 0 ; j < n ; j++){
            if(i == 0 or i == (n-1) or j == 0 or j == (n-1) ){
                cout<<"*";
                
                
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}