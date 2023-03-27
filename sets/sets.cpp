#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> s;
    
    int queryCount = 0;
    
    cin >> queryCount;
    
    for (int i = 0; i < queryCount; i++) {
        int query = 0;
        int value = 0;
        
        cin >> query >> value;
        
        switch (query) {
            case 1:
                s.insert(value);
                break;
            
            case 2:
                if (s.find(value) != s.end()) {
                    s.erase(value);
                }
                break;
            
            case 3:
                if (s.find(value) != s.end()) {
                    cout << "Yes" << endl;
                } else {
                    cout << "No" << endl;
                }
        }
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}



