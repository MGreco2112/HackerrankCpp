#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here

class Student{ //define Student class
  int scores[5]; //define instance variable int array scores set to size 5
  
  public: //denote public access modifier
    void input(){ //define void input member function/method
        for (int i = 0; i < 5; i++) { //loop through size of scores arr
            cin >> scores[i]; //take input from console to current iterated index of scores
        }
    }
    
    int calculateTotalScore() { //define int calculateTotalScore method
        int score = 0; //initilize output int var score to 0
        
        for (int i = 0; i < 5; i++) { //iterate through scores array
            score += scores[i]; //add current iterated value of scores to score variable
        }
        
        return score; //return score value from function
    }
  
    
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
