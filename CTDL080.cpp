#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a; cin>>a;
    while(a--){
    	string s; cin>>s;
    	int arr[s.length()];
    	for(int i=0;i<s.length();i++) {
    		arr[i]=1;
    		if((int)s[i]<=90) s[i]=tolower(s[i]);
		}
    	for(int i=1;i<s.length();i++){
    		for(int j=0;j<i;j++){
    				if(s[i]>s[j]) arr[i]=max(arr[i],arr[j]+1);
			}
		}
		int max=0;
		for(int i=0;i<s.length();i++){
			if(arr[i]>max) max=arr[i];
		}
		cout<<max<<endl;
	}
}

