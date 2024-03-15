#include <bits/stdc++.h>
using namespace std;
int arr[10000],ok=1,n,k;
void ktao(){
	for(int i=1;i<=n;i++) arr[i]=i;
	for(int i=1;i<=n;i++) cout<<arr[i];
	cout<<" ";
}
void sinh(){
	int i=n;
	while(i>=1 && arr[i]==(k-n+i)){
		i--;
	}
	if(i==0) ok=0;
	else{
		arr[i]++;
		for(int j=i+1;j<=n;j++){
			arr[j]=arr[j-1]+1;
		}
		for(int i=1;i<=n;i++) cout<<arr[i];
		cout<<" ";
	}
}
int main()
{
	int s; cin>>s;
	while(s--){
		cin>>k>>n;
		ktao();
		while(ok){
			sinh();
		}
		cout<<endl;
		ok=1;
	}
}

