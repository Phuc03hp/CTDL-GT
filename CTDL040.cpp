#include <bits/stdc++.h>
using namespace std;
int main()
{
	int s; cin>>s;
	while(s--){
		int k; cin>>k;
		int arr[k];
		for(int i=0;i<k;i++) cin>>arr[i];
		sort(arr,arr+k);
		int so1=0,so2=0,count1=0,count2=0;
		for(int i=k-1;i>=0;i-=2){
			so1+=arr[i]*pow(10,count1);
			count1++;
		}
		for(int i=k-2;i>=0;i-=2){
			so2+=arr[i]*pow(10,count2);
			count2++;
		}
		cout<<so1+so2<<endl;
	}
}

