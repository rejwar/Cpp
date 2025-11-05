#include<iostream>
using namespace std;

class Shape {
    public: 
        float width;
        float length;

};

class Rectangle : public Shape {
    public : 
    float Area() {
        return length * width;
    }
};

int main() {
    Rectangle r;

    cout<<"Enter width :";
    cin>> r.width;

    cout << "Enter length : ";
    cin>> r.length;

    cout << "Area of Rectangle " << r.Area() << endl;

    return 0;

}