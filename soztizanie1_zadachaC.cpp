#include <iostream>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int array[10][10];
	int player = 0;
	int sum = 0;
	int line = 0;
	
	for(int i=0; i < n; i++){
		for(int j=0; j<m; j++){
			cin >> array[i][j]; 
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			line += array[i][j];
		}
	
		if(sum < line){
			player = i;
			sum = line;
		}
			
		if(sum == line){
			cout << i;
		}
		line = 0;
	}
	
	cout << sum << endl << player;
	return 0;
}
