#include <bits/stdc++.h>
using namespace std;
vector<long long> v;
void Try(int i){
	if(i>999999999) return;
	v.push_back(i);
	Try(10*i);
	Try(10*i+1);
}
int main()
{
	Try(1);
	sort(v.begin(),v.end());
	int s; cin>>s;
	while(s--){
		int n; cin>>n;
		int i=0,count=0;
		while(n>=v[i]){
			count++;
			i++;
		}
		cout<<count<<endl;
	}
}

