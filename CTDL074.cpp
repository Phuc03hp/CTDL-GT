#include <bits/stdc++.h>
using namespace std;
long long check(vector<long long> v, long long k){
    for(long long i=0;i<v.size();i++){
        if(k==v[i]) return 1;
    }
    return 0;
}
int main()
{
	long long s; cin>>s;
	while(s--){
		long long n,m;
		cin>>m>>n;
		vector<long long> v_m;
		vector<long long> v_n;
		set<long long> s;
		vector<long long> v;
		for(long long i=0;i<m;i++){
			long long k; cin>>k;
			v_m.push_back(k);
			s.insert(k);
		}
		for(long long i=0;i<n;i++){
		    long long k; cin>>k;
		    s.insert(k);
		    if(check(v_m,k)) v_n.push_back(k);
		}
		sort(v_n.begin(),v_n.end());
		for(auto i : s){
		    cout<<i<<" ";
		}
		cout<<endl;
		for(long long i=0;i<v_n.size();i++){
		    cout<<v_n[i]<<" ";
		}
		cout<<endl;
	}
}
