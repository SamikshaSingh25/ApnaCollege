//without function:
/*
#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    
    int fact1=1;
    for(int i=2;i<=n1;i++){
        fact1=fact1*i;
    }

    int fact2=1;
    for(int i=2;i<=n2;i++){
        fact2=fact2*i;
    }

    cout<<fact1<<" "<<fact2;
    return 0;
}
*/

//with function

#include<iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}

int main()
{
    int n;
    cin>>n;
    int ans=fact(n);
    cout<<ans<<endl;
    return 0;
}