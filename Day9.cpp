// print N odd number 
#include <iostream>
using namespace std;
void printNodd(int n ){
    int num=1;
    int i =1;
       while(i<=n){
            cout<<num<<' ';
            num+=2;
            i++;
            
        }
}
void printNeven(int n){
        int num = 1;
        for(int i = 1 ; i <= n ; i++){
            cout<<num+1<<" ";
            num = num+2;
            
        }
}

int Sum_odd(int a , int b){
    int sum = 0;
    for(int i = a; i <= b ; i++){
        if(i%2 !=0 ){
            sum = sum +i;
        }
    }
    return sum;
}

int main(){

    cout<<"Series of Odd numnber : ";
    printNodd(15);
    cout<<"\nSeries of Even numnber : ";
    printNeven(15);
    cout<<"\nSum of N odd numnber : ";
    cout<<Sum_odd(5 ,10);

    return 0;
}