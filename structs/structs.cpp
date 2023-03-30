#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    add code for struct here.
*/

//define struct Student
struct Student{
  int age; //define int field age
  string first_name; //define string field first_name
  string last_name; //define string field last_name
  int standard;  //define int field standard
};

int main() { //main function
    Student st; //instantiate Student struct st
    
    //take input from stdin, assign to the fields of st
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    //output the values assigned to the fields within st
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}