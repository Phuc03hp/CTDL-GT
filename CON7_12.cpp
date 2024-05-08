#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a; cin>>a;
	while(a--){
		string s; cin>>s;
		reverse(s.begin(),s.end());
		string res="";
		stack<string> st;
		for(int i=0;i<s.length();i++){
			if(isalpha(s[i])) st.push(string(1,s[i]));
			else{
				string v1,v2;
				v1=st.top();
				st.pop();
				v2=st.top();
				st.pop();
				string mid="("+v1+s[i]+v2+")";
				st.push(mid);
			}
		}
		cout<<st.top()<<endl;
	}
}

