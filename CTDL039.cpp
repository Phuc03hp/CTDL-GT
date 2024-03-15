#include <bits/stdc++.h>
using namespace std;
#define MOD 100000007
int main()
{
	int s; cin>>s; 
	while(s--){
		int k; cin>>k;
		long long tong=0;
		int arr[k];
		for(int i=0;i<k;i++){
			cin>>arr[i];
		}
		sort(arr,arr+k);
		for(int i=0;i<k;i++){
			tong+=i*arr[i];
			if(tong>=MOD) tong%=MOD;
		}
		cout<<tong<<endl;
	}
}

