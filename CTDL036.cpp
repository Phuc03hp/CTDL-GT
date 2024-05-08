#include <bits/stdc++.h>
using namespace std;

int main()
{
	int s; cin>>s;
	while(s--){
		int n; cin>>n;
		set<int> s1;
		set<int> s2;
		for(int i=1;i<=n;i++){
			s1.insert(i);
		}
		for(int i=1;i<=2*n-2;i++){
			int k; cin>>k;
			s2.insert(k);
		}
		if(s1.size()!=s2.size()) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}

