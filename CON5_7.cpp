#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n,k; cin>>n>>k;
		int d[n+5];
		d[0]=1,d[1]=1;
		for(int i=2;i<=n;i++){
			d[i]=0;
			for(int j=1;j<=min(k,i);j++){
				d[i]+=d[i-j];
				d[i]%=1000000007;
			}
		}
		cout<<d[n]<<endl;
	}
}
