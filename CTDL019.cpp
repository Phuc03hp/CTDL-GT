#include <bits/stdc++.h> 
using namespace std;
int check(int arr[], int n){
    for(int i=0;i<n;i++){
        if(arr[i]+i!=n) return 0;
    }
    return 1;
}
int main()
{
    long long s; cin>>s;
    while(s--){
       int n, arr[10000]; cin>>n;
       for(int i=0;i<n;i++) cin>>arr[i];
       if(check(arr,n)) {
           for(int i=n-1;i>=0;i--) cout<<arr[i]<<" ";
           cout<<endl;
       }
       else{
           while(next_permutation(arr,arr+n)){
           for(int i=0;i<n;i++) cout<<arr[i]<<" ";
           cout<<endl;
           break;
       }
       }
    }
    return 0;
}
