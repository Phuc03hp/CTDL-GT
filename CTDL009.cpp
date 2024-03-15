#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a; cin>>a;
	while(a--){
		string s; cin>>s;
		string res="";
		res+=s[0];
		for(int i=1;i<s.length();i++){
			int n=res.length()-1;
			if((s[i]-'0')^(res[n]-'0')) res+="1";
			else res+="0";
		}
		cout<<res<<endl;
	}
}

