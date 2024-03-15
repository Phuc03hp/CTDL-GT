#include<bits/stdc++.h>
using namespace std;
int X[100],dem[100],n;
void Try(int i){
 for(int j=1;j<=n;j++){
 	if(dem[j]==0){
   		X[i]=j;
   		dem[j]=1;
   		if(i==n){
    		for(int x =1;x<=n;x++) cout<<X[x];
    		cout<<" ";}
   		else{
    		Try(i+1);
			}
   		dem[j] = 0;
  		}
 	}
}
int main(){
 int tc;cin>>tc;
 while(tc--){
  cin>>n;
  memset(dem,0,sizeof(dem));
  Try(1);
  cout<<endl;
 }
 return 0;
}
