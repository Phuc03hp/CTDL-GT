#include <bits/stdc++.h>
using namespace std;
int main()
{	
	int s; cin>>s;
	while(s--){
		int k; cin>>k;
		vector<int> v;
		for(int i=0;i<k;i++){
			int b; cin>>b;
			v.push_back(b);
		}
		while(v.size()>0){
			cout<<"[";
			for(int i=0;i<v.size()-1;i++) cout<<v[i]<<" ";
			cout<<v[v.size()-1]<<"]"<<endl; 
			for(int i=0;i<v.size()-1;i++){
				v[i]=v[i]+v[i+1];
			}
			v.erase(v.end()-1,v.end());
		}
		
	}
}


