#include <bits/stdc++.h>
using namespace std;
string min(string a){
	string s=a;
	for(int i=0;i<s.length();i++){
		if(s[i]=='5') s[i]='3';
	}
	return s;
}
string max(string a){
	string s=a;
	for(int i=0;i<s.length();i++){
		if(s[i]=='3') s[i]='5';
	}
	return s;
}
int main()
{
	int s; cin>>s;
	while(s--){
		string a,b; cin>>a>>b;
		int minia=stoi(min(a));
		int minib=stoi(min(b));
		int maxia=stoi(max(a));
		int maxib=stoi(max(b));
		cout<<minia+minib<<" "<<maxia+maxib<<endl;
	}
}

