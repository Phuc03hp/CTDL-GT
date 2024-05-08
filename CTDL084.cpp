#include <bits/stdc++.h>
using namespace std;
int n,k;
string curString;
vector<long long> v;
void Try(int i){
	if (i>99999999) return ;
	v.push_back(i);
	Try(10*i);
	Try(10*i+9);
}
int main()
{
	int s; cin>>s;
	while(s--){
		cin>>n;
		Try(9);
		int ok=1;
		sort(v.begin(),v.end());
		for(int i=0;i<v.size() && ok;i++){
			if(ok){
				if(v[i]%n==0) {
					cout<<v[i]<<endl;
					ok=0;
				}
			}			
		}
		v.clear();
	}
}
