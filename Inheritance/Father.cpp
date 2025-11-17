#include<iostream>
using namespace std;

class Parent  {
    public: 
    void ShowParent() {
        cout <<" I am Parent class \n";
    }
};

class Child : public Parent {
    public: 
    void ShowChild () {
        cout << " I am Child class \n";
    }
};

int main() {
    Child obj; 
    obj.ShowParent();
    obj.ShowChild();
}