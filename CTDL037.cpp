#include<bits/stdc++.h>
using namespace std;
int arr[10]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int check_i(int &n){
    if(n>1000) return 9;
    for(int i=0;i<10;i++){
        if(n<arr[i])  return i-1;
    }
}
int main()
{
	int s; cin>>s; 
	while(s--){
	    int n; cin>>n;
	    int check=0;
	    while(n){
	        int k=check_i(n);
	        check+=(n/arr[k]);
	        n=n%arr[k];
	    }
	    cout<<check<<endl;
	}
}
