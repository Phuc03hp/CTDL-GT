#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a; cin>>a;
    while(a--){
    	int n; cin>>n;
    	stack<long long> st;
    	for(int i=0;i<n;i++){
    		long long k; cin>>k;
    		st.push(k);
		}
		while(!st.empty()){
			cout<<st.top()<<" ";
			st.pop();
		}
		cout<<endl;
	}
}

