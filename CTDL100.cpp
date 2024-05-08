// Dung algo left-right
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s; cin>>s;
    while(s--){
    	int n; cin>>n;
    	int arr[n];
    	for(int i=0;i<n;i++) cin>>arr[i];
    	int res=0;
    	for(int i=0;i<n;i++){
    		int left=i-1,right=i+1;
    		while(left>=0 && arr[left]>=arr[i]){
    			left--;
			} 
			while(right<n && arr[right]>=arr[i]){
    			right++;
			} 
			left++;
			right--;
			res=max(res,(right-left+1)*arr[i]);   		
		}
		cout<<res<<endl;
	}
}
