#include <iostream>
using namespace std;
int main(){
    int n,i,result=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        result=result+arr[i];
    }
    cout<<result;
    return 0;
}