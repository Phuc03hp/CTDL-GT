#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
    	int n; 
    	cin >> n;
    	
    	vector<int> arr(n);
    	vector<int> res(n, -1); // Kh?i t?o m?ng res v?i giá tr? -1
    	
    	for(int i = 0; i < n; i++){
    		cin >> arr[i];
		}
		
		for(int i = 0; i < n-1; i++){
			for(int j = i+1; j < n; j++){
				if(arr[j] > arr[i]) {
					res[i] = arr[j];
					break;
				}
			}
		}
		
		for(int i = 0; i < n; i++){
    		cout << res[i] << " ";
		}
		cout<< endl;
	}
    return 0;
}

