#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of N :";
    cin>>n;

    int i=1;
    int val =1;
    while(i<=n){
        int k=1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        int j = 1;
        while(j<=i){
            cout<<val;
            val++;
            j++;
        }
        i++;
        cout<<endl;
    }
}