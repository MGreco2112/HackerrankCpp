#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int len; /*declare int variable*/
    cin >> len; /*store input to len (length of array)*/
    
    int arr[len]; /*declare int array of size dictated by input*/
    
    for (int i = 0; i < len; i++) { /*loop from 0 to < len*/
        cin >> arr[i]; /*assign input to array indexes*/
    }
    
    for (int i = len - 1; i >= 0; i--) { /*loop through array from largest index to smallest*/
        cout << arr[i] << " "; /*print element at array index with a space sep*/
    }
      
    return 0;
}
