#include <iostream>

using namespace std;

int gcd(int a, int b){
	while(a>0 && b>0){
		if(a>b){
			a=a&b;
		}
		else
			b=b%a;
	}
	
	if(a!=0)
		return a;
	
	return b;
}

int main(){
	int a, b, c;
	cin >> c >> b;
	
	for(int i=2; i<=c; i++){
		cin >> a;
		b=gcd(a,b);
	}
	
	cout << b;
	return 0;
}
