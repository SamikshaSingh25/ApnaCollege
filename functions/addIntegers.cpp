#include<iostream>
using namespace std;

void print(int num){         //define different function "print()"
    cout<<num<<endl;
    return;
}

int add(int num1,int num2){
    print(num1);
    print(num2);
    int sum = num1 + num2;
    return sum;
}

int main()               //the "main fuction"
{
    int a,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    return 0;
}