#include <iostream>
#include <string>
#include <stack>

using namespace std;

stack<int> stac;
string a;
int n;

int main(void){
    while(cin >> a){
        if (a == "push"){
            cin >> n;
            stac.push(n);
            cout << "ok" << endl;}
 
        else if (a == "pop"){
            if (stac.empty()) {
                cout<<"error"<<endl;
            }
            
			else {
                cout << stac.top() << endl;    
                stac.pop();
            }    
        }
        
		else if (a == "back"){
            if(stac.empty()){
                cout<<"error"<<endl;
            }
            
			else {
                cout << stac.top() << endl;
            }
        }
        
        else if (a == "size"){
            cout << stac.size()<< endl;
        }
        
        else if (a == "clear"){
            while(!stac.empty()) stac.pop();
                cout << "ok" << endl;
        }
        
        else{
            cout << "bye" << endl;                
            break;                    
        }    
	}
    return 0;   
}
