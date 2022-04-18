#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of N : ";
    cin>>n;

    int i=0;
    while(i<=n){
        int k =1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        int j = i;
        while(j>=1){
            cout<<j;
            j--; 
        }
        j= j+2;
        while(j<=i){
            cout<<j;
            j++;
        }

        i++;
        cout<<endl;
    }
}