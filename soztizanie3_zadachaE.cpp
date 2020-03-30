#include <iostream>
using namespace std;

int main(){
	int array[100][100];
	int n, m;
	cin >> n >> m;
	bool check = false;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> array[i][j];
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(array[i][j] != array[j][i]){
				cout << "0" << endl;
				return 0;
			}
			else {
				check;
			}
		}
		if(check==false)
			cout << "yes";
	}
	return 0;
}
