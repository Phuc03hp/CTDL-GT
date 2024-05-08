#include<bits/stdc++.h>
using namespace std;
int main(){
	int s; cin>>s;
	while(s--){
		int dinh,canh;
		cin>>dinh>>canh;
		int arr[dinh+1][dinh+1];
		for(int i=1;i<dinh+1;i++){
			for(int j=0;j<dinh+1;j++){
				arr[i][j]=0;
			}
		}
		for(int i=1;i<=canh;i++){
			int a,b; cin>>a>>b;
			arr[a][b]=1;
			arr[b][a]=1;
		}
		for(int i=1;i<=dinh;i++){
			cout<<"D"<<i<<":"<<" ";
			for(int j=1;j<=dinh;j++){
				if(arr[i][j]==1) cout<<j<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
