#include<iostream>
using namespace std;

int BtD(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int last = n%10;
        ans = ans + (x*last);
        x= x*2;
        n = n/10;
    }
    return ans; 
}
int main()
{
    int n;
    cin>>n;
    cout<<BtD(n)<<endl;
    return 0;
}