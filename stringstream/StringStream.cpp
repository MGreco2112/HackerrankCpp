#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	vector<int> output;
    
    stringstream ss(str);
    
    for (int i = 0; i <= str.length(); i++) {
        int num;
        char ch;
        
        if (str[i] == ',' || i == str.length()) {
            ss >> num >> ch;
            output.push_back(num);
        }
    }
    
    return output;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
