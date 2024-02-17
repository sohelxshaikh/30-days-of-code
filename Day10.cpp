#include <iostream>
using namespace std;


int print(int i ,int n){
    if(i>n){
        return 0;
    }
    cout<<i<<" ";
    print(i+1, n);

}


int printRev(int n )
{
    if(n<=0){
        return 0;
    }
    cout<<n<<" ";
    printRev(n -1);
}

int main(){
        printRev(100000);
    
}