#include <bits/stdc++.h>
using namespace std;

int HdtD(string n){
    int ans = 0;
    int x = 1;
    int s = n.size();
    for(int i=s-1;i>=0;i--){
        if(n[i] >= '0' && n[i] <= '9'){
            ans = ans + x*n[i];
        }
        else if( n[i] >= 'A' && n[i] <= 'F'){
            ans = ans + x*(n[i] + 10);
        }
        x = x*16;
    }
return ans;
}

int main()
{
    string n;
    cin>>n;

    cout<<HdtD(n)<<endl;
    return 0;
}