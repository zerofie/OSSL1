#include <iostream>
using namespace std;
int linear(int arr[],int n,int s){
    for(int i=0;i<n;i++){
        if(arr[i]==s) return i+1;
    }
    return -1;
}
int main(){
    int n,s;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>s;
    cout<<linear(arr,n,s);
    return 0;
}
