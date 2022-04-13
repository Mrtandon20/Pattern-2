#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter the value of N :";
    cin>>N;

    int n1 = (N+1)/2;
    int n2 = N/2;

    int i=1;
    while(i<=n1){
        int k=1;
        while(k<=n1-i){
            cout<<" ";
            k++;
        }
        int j = 1;
        while(j<=2*i-1){
            cout<<"*";
            j++;
        }
            cout<<endl;
            i++;
    }

    int a = n2;
    while(a>=1){
        int k = 1;
        while(k<=n2-a+1){
            cout<<" ";
            k++;
        }
        int j = 1;
        while(j<=2*a-1){
            cout<<"*";
            j++;
        }
        cout<<endl;
            a--;
    }
}