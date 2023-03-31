#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */

class Rectangle { //define Rectangle class
    public: //public access modifier for fields
        int width; //int field width and height
        int height;
        
        void display() { //display method to print width and height
            cout << width << " " << height << endl;
        }
};

class RectangleArea : public Rectangle { //define child class with public access to Rectangle
    public: //public access modifier
        void read_input() { //read input from cli for assignment
            cin >> width >> height;
        }
        
        void display() { //display area, overloading prior defined display method in parent class
            cout << width * height << endl;
        }
    
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}