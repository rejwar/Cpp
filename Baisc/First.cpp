
//

//

#include<iostream>
using namespace std;

class A {
    public: 
    void ShowA() {
        cout << "I am A (Grandfather )\n";
    }
};

class B: public A {
    public: 
    void ShowB() {
        cout << "I am B {father }\n"; 
    }
};

class C : public B {
    public : 
    void ShowC() {
        cout <<" I am C (child )\b";
    }
};

int main() {
    C obj; 
    obj.ShowA();
    obj.ShowB();
    obj.ShowC();

    return 0;
}