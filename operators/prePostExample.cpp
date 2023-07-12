#include<iostream>
using namespace std;

int main()
{
    int i=1;
    //1 after ++ becomes 2   then in next becomes 3first then gets add
    //1+3
    i=i++ + ++i;
    cout<<i<<endl;
    return 0;
}