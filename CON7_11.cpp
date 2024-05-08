#include <bits/stdc++.h>
using namespace std;
string res(string s){
	stack<char> st;
	string r="";
	map<char,int>mp;
	mp['*']=2;
	mp['/']=2;
	mp['+']=1;
	mp['-']=1;
	mp['^']=3;
	mp['%']=2;
	mp['(']=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='(') st.push(s[i]);
		else if(isalpha(s[i])) r+=s[i];
		else if(s[i]==')'){
			while(st.top()!='('){
				r+=st.top();
				st.pop();
			}
			st.pop();
			//bo ki tu ( di
		}
		else{
			while (!st.empty() && mp[s[i]] <= mp[st.top()]) { 
        			r += st.top();
        			st.pop();
    			}
    			st.push(s[i]);
			}
	}
	while(!st.empty()){
		r+=st.top();
		st.pop();
	}
	return r;
}
int main()
{
	int s; cin>>s;
	while(s--){
		string k; cin>>k;
		cout<<res(k)<<endl;
	}
}

