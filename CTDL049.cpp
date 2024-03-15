#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s; cin>>s; 
	while(s--){
	    int a,b,ok=1; cin>>a>>b;
	    for(int i=1;i<=a;i++){
	        int k; cin>>k;
	        if(k==b) {
	            cout<<i<<endl;
	            ok=0;
	        }
	    }
	    if(ok) cout<<"NO"<<endl;

	}
}
