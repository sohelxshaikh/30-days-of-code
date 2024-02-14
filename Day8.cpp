
// Gratest common factor
// HCF


#include <iostream>
using namespace std;

int main(){
    
    int n1 = 20 ;
    int n2 = 40;
    int HCF = 1;
    for(int i = min(n1,n2) ; i >=1 ; i--){
        if(n1%i == 0 && n2%i == 0){
            HCF = i;
            break;
        }
    }
    cout<<HCF;


}