#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a; cin>>a;
	while(a--){
		string s; cin>>s;
		int arr[100];
		cout<<s[0];
		for(int i=1;i<s.length();i++){
			int a=((s[i]-'0') + (s[i-1]-'0'))%2;
            cout<<a;
		}

		cout<<endl;
	}
}

