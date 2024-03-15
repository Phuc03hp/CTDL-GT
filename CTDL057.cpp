#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long s; cin>>s;
	while(s--){
		vector<long long>v;
		vector<long long>res;
		int n; cin>>n;
		long long x; cin>>x;
		for(int i=0;i<n;i++){
			long long v1; cin>>v1;
			v.push_back(v1);
			res.push_back(v1);
		}
		sort(v.begin(),v.end());
		long long rr;
		if(x<v[0]) cout<<"-1"<<endl;
		else if(x>v[n-1]) {
			cout<<v[n-1]<<endl;
		}
		else{
			for(int i=0;i<n;i++){
				if(x<v[i]){
					rr=v[i-1];
					break;
				}
				
			}
		}
		for(int i=0;i<n;i++){
			if(rr==res[i]){
				cout<<i+1<<endl;
			}
		}
	}
}

