#include <bits/stdc++.h>
using namespace std;
int check(string s){
	stack<char> st;
	for(int i=0;i<s.length();i++){
		if(st.empty()) {
			if(s[i]=='}' || s[i]==']' || s[i] == ')') return 0;
			else st.push(s[i]);
		}
		else{
			if(s[i]=='('||s[i]=='{'||s[i]=='[') st.push(s[i]);
			if(s[i]==')'){
				if(st.top()=='(' ) st.pop();
				else return 0;
			}
			if(s[i]==']'){
				if(st.top()=='[' ) st.pop();
				else return 0;
			}
			if(s[i]=='}'){
				if(st.top()=='{' ) st.pop();
				else return 0;
			}
		}
	}
	return 1;
}
int main()
{
	int s; cin>>s;
	while(s--){
		string a; cin>>a;
		if(check(a)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

