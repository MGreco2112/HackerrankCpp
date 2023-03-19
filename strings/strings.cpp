#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
    string b;
    string newStrA;
    string newStrB;
    
    cin >> a >> b;
    
    newStrA += b[0];
    newStrB += a[0];
    
    for (int i = 1; i < a.size(); i++) {
        newStrA += a[i];
    }
    
    for (int i = 1; i < b.size(); i++) {
        newStrB += b[i];
    }
    
    cout << a.size() << " " << b.size() << endl;
    
    cout << a + b << endl;
    
    cout << newStrA << " " << newStrB << endl;
  
    return 0;
}