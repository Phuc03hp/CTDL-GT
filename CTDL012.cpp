#include <bits/stdc++.h>
using namespace std;
vector<long long> res;
long long k;
void Try(long long k){
	if(k>1e9+7) return;
	res.push_back(k);
	Try(k*10);
	Try(k*10+9);
}
int main(){
	int s; cin>>s;
	while(s--){
		cin>>k;
		int n=k;
		Try(9);
		sort(res.begin(),res.end());
		for(int i=0;i<res.size();i++){
			if(res[i]%n==0) {
				cout<<res[i]<<endl;
				break;
			}
		}
	}
}
