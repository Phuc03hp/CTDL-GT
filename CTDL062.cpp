#include <bits/stdc++.h>
using namespace std;
int arr[10000],n,k,tong,ok=1;
void ktao(){
	for(int i=1;i<=k;i++){
		arr[i]=i;
	}
}
void sinh(){
	int i=k;
	while(arr[i]==n-k+i && i>=1){
		i--;
	}
	if(i==0){
		ok=0;
	}
	if(ok==1){
		arr[i]++;
		for(int j=i+1;j<=k;j++){
			arr[j]=arr[j-1]+1;
		}
	}
}
int main()
{
	int a; cin>>a;
	while(a--){
		cin>>n>>k>>tong;
		int res[n+1];
		for(int i=1;i<=n;i++) cin>>res[i];
		int r=0;
		ktao();
		while(ok){
			int tongcheck=0;
			for(int i=1;i<=k;i++){
			tongcheck+=res[arr[i]];
			}
			if(tongcheck==tong) r++;
			sinh();
		}
		cout<<r<<endl;
		ok=1;
	}
}

