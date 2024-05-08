#include <bits/stdc++.h>
using namespace std;
int main(){
    int s; cin>>s;
    while(s--){
        string s; cin>>s;
    	stack<long long> st;
    	long long v1,v2;
    	for(int i=0;i<s.length();i++){
        	if(s[i]-'0'>=0) st.push(s[i]-'0');	
        	else{
        		long long v1,v2,v;
        		v1=st.top();
        		st.pop();
        		v2=st.top();
        		st.pop();
        		if(s[i]=='*') v=v1*v2;
        		if(s[i]=='/') v=v2/v1;
        		if(s[i]=='+') v=v1+v2;
        		if(s[i]=='-') v=v2-v1;
        		if(s[i]=='%') v=v2%v1;
        		st.push(v);
			}
        }
        cout<<st.top()<<endl; 
    } 
}

