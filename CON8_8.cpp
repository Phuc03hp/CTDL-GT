#include <bits/stdc++.h>
using namespace std;
vector<long long> v;
void Try(unsigned long long i){
	if(i>9999999999) return;
	v.push_back(i);
	Try(10*i);
	Try(10*i+1);
}
int main()
{
	Try(1);
	sort(v.begin(),v.end());
	long long s; cin>>s;
	while(s--){
		long long n; cin>>n;
		long long i=0,count=0;
		while(v[i]%n!=0){
			i++;
		}
		cout<<v[i]<<endl;
	}
}

