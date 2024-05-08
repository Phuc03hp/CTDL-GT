#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a; cin>>a;
	cin.ignore();
	while(a--){
		string s;
		getline(cin,s);
		string tmp;
		stringstream ss(s);
		string z=" ";
		while(ss>>tmp){
			reverse(tmp.begin(),tmp.end());
			cout<<tmp<<z;
		}
		cout<<endl;
	}
}

