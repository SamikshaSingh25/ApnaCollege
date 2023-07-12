#include <iostream>
using namespace std;

int main()
{
  int savings;
  cin >> savings;

  if (savings > 5000) {
    if(savings>10000){
        cout << "roadtrip with neha";
    }
    else{
        cout<<"shopping with neha";
    }
  }
  else if(savings>2000){
    cout<<"rashmi";
  } else {
    cout << "friends";
  }
   return 0;
}