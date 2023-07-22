/*given an array a[] of size n. Output sum of each subarray of the given array.
Example: array: [1,2,2]

subarrays: [1] [1,2] [1,2,2] [2] [2,2] [2]
sum:        1    3      5     2    4    2 

*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int curr=0;

    for(int i=0;i<n;i++){
        curr=0;
        for(int j=i;j<n;j++){
            curr += a[j];
            cout<<curr<<endl;
        }
    }
    return 0;
}