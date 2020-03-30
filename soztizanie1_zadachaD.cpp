#include <iostream>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int array[n][m];
	int sum = 0;
	int line = 0;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> array[i][j]; 
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			line = array[i][j];
			
			if(sum < line){
			sum = line;
			}
			
			else if(sum == line){
				cout << sum << endl;
				cout << i << " " << j << endl;
			}
		}
	}
	return 0;
}
