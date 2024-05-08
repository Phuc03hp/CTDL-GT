#include <bits/stdc++.h>
using namespace std;
int main()
{
	int sbt; cin>>sbt;
	while(sbt--){
		int dinh,canh,start;
		cin>>dinh>>canh>>start;
		vector<vector<int>> v(canh+1);
		vector<int> check(dinh+1,1);
		stack<int> st;
		vector<int> res;
		while(canh--){
			int m,n; cin>>m>>n;
			v[m].push_back(n);
			v[n].push_back(m);
		}
		st.push(start);
		cout<<start<<" ";
		check[start]=0;
		while(!st.empty()){
			int now=st.top();
			st.pop();
			for(int i=0;i<v[now].size();i++){
				int v_now=v[now][i];
				if(check[v_now]){
					check[v_now]=0;
					cout<<v_now<<" ";
					st.push(now);  // De quay lui khi v_now khong co gi di tiep
					st.push(v_now);
					break;
				}
			}	
		}
		cout<<endl;
	}
}

