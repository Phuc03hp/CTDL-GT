// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int s; cin>>s;
    while(s--){
        int n; cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        long long a[n-1];
        for(int i=0;i<n-1;i++) cin>>a[i];
        long long res=-1;
        for(int i=0;i<n-1;i++){
            if(arr[i]!=a[i]){
                res=i+1;
                break;
            }
        }
        if(res!=-1) cout<<res<<endl;
        else{
            cout<<n<<endl;
        }
    }
}
