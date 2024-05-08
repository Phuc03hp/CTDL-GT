#include <bits/stdc++.h>
using namespace std;
int main(){
    int s; cin>>s;
    while(s--){
        string s; cin>>s;
    	stack<string> st;
    	string v1,v2;
    	for(int i=0;i<s.length();i++){
        	if(isalpha(s[i])) st.push(string(1,s[i]));
        	else{
        		v1=st.top();
        		st.pop();
        		v2=st.top();
        		st.pop();
        		string ss="("+v2+s[i]+v1+")";
        		st.push(ss);
			}
        }
		cout<<st.top()<<endl;
    } 
}

