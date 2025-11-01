#include<iostream>
using namespace std;

class Rectangle {
    public:

    float height , length , width;



Rectangle() {

    cout<<"Enter the height :" ;
    cin>>height;

    cout <<"Enter the widht";
    cin >> width;

    cout << "Enter the lenght :";
    cin>> length;

}

float Area() {
    return width * length;
}

float Volume () {
    return height * length * width;
}
};

int main() {
    Rectangle r1;
    cout << "Area is :" << r1.Area() << endl;
    cout << "Volume is :" << r1.Volume() << endl;

    return 0;
}