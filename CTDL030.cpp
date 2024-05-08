#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int k; cin>>k;
		string s; cin>>s;
		int l=s.length();
		for(int i=0;i<l;i++){
			char a=s[l-1];
			int v=l-1;
			for(int j=l-1;j>i && k>0;j--){
				if(a<s[j]){
					a=s[j];
					v=j;
				}
			}
			if(a>s[i] && k>0){
				swap(s[i],s[v]);
				k--;
			}
		}
		cout<<s<<endl;
	}
}



