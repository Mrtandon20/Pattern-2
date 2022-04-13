#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Value of N : ";
    cin>>n;

    int i=n;
    while(i>=1){
        int j=1;
        while(j<=i){
            cout<<i;
            j++;
        }
        i--;
        cout<<endl;
    }
}