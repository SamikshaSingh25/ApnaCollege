///this is by BRUTE FORCE


#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];

    //taking input
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    //printing output 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //searching for element
    int x;
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
                cout<<i<<" "<<j<<"\n";
                flag=true;
            }
        }
    }

    if(flag){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element NOT found"<<endl;
    }

    return 0;
}