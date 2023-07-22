#include<iostream>
#include<climits>     //header file to use INT_MAX and INT_MIN
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxNo = INT_MIN; //smallest no. possible in c++
    int minNo = INT_MAX;  //largest no. possible in c++
    for(int i=0;i<n;i++){
       /*if(arr[i]>maxNo){
            maxNo=arr[i];
        }*/ 

        //compressing the above if statement in one line below

        maxNo =max(arr[i], maxNo);   //this will give the max of the provided 2 nos.

       /* if(arr[i]<minNo){
            minNo=arr[i];
        }*/ 

         //compressing the above if statement in one line below

        minNo = min(arr[i],minNo);
    }

    cout<<maxNo<<" "<<minNo<<endl;
    return 0;
}