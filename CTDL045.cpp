#include <bits/stdc++.h>
using namespace std;
int main()
{
	int s; cin>>s;
	while(s--){
		string a; cin>>a;
		int arr[26]={0};
		for(int i=0;i<a.length();i++){
			arr[(int)a[i]-97]++;
		}
		int max=0;
		for(int i=0;i<26;i++){
			if(max<arr[i]) max=arr[i];
		}
		if(2*max>a.length()+1) cout<<"-1"<<endl;
		else cout<<"1"<<endl;
	}
}

