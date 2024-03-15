#include <bits/stdc++.h>
using namespace std;
string check(int n){
	int m=n/7;
	string res="";
	for(int i=m;i>=0;i--){
		if((n-i*7)%4==0){
			for(int j=1;j<=(n-7*i)/4;j++){
				res+="4";
			}
			for(int k=1;k<=i;k++){
				res+="7";
			}
			return res;
		}
	}
	return "-1";
}
int main()
{
	int s; cin>>s;
	while(s--){
		int n; cin>>n;
		cout<<check(n);
		cout<<endl;
	}
}

