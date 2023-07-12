#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    //upper half
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=1;j--){
            cout<<" ";
        }
        for(int j=1;j<2*i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //lower half
    for(int i=n;i>=1;i--){
        for(int j=n-i;j>=1;j--){
            cout<<" ";
        }
        for(int j=1;j<2*i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}