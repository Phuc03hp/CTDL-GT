#include<bits/stdc++.h>
using namespace std;
int check(long long n, long long s, long long m){
    double tong=s*m;
    if((s-s/7)*n < tong) return -1; // So sanh mua vs an
    return ceil(tong/n); // ceil: Lam tron tang len
}
int main()
{
    int s; cin>>s;
    while(s--){
        long long n,s,m; cin>>n>>s>>m;
        cout<<check(n,s,m)<<endl;
    }
}
