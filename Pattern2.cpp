#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Value of N : ";
    cin>>n;

    int i=1;
    while(i<=n){
        int k =1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        i++;
        cout<<endl;
    }
}