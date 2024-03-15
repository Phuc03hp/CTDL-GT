#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long s; cin>>s;
	while(s--){
		long long k; cin>>k;
		vector<int> v;
		for(int i=0;i<k;i++){
			int a; cin>>a;
			v.push_back(a);
		}
		long long tong=0;
		while(v.size()>1){
			sort(v.begin(),v.end());
			int b=v[0]+v[1];
			tong+=b;
			v.erase(v.begin());
			v.erase(v.begin());
			v.push_back(b);
		}
		cout<<tong<<endl;
	}
}

