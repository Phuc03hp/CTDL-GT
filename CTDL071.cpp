#include <bits/stdc++.h>
using namespace std;
int main()
{
	int s; cin>>s;
	while(s--){
		int n; cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++) {
			int k; cin>>k;
			v.push_back(k);
		}
		sort(v.begin(),v.end());
		vector<int> nho;
		vector<int> to;
		for(int i=0;i<n/2;i++){
			nho.push_back(v[i]);
		}
		for(int i=n/2;i<n;i++){
			to.push_back(v[i]);
		}
		reverse(to.begin(),to.end());
		vector<int> res;
		for(int i=0;i<n/2;i++){
			res.push_back(to[i]);
			res.push_back(nho[i]);
		}
		if(n%2==1) res.push_back(to[to.size()-1]);
		for(int i=0;i<n;i++) cout<<res[i]<<" ";
		cout<<endl;
	}
}

