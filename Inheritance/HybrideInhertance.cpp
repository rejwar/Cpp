#include<iostream>
using namespace std;

class A {
    protected:
    int a;

    public: 

    void get_a() {
        cout << "Enter the value of 'a'";
        cin >> a;
    }
};

class B: public A {
    protected: 
        int b;
        public: 
        void get_b() {
            cout << "Enter the value of 'b'";
            cin >> b;
        }
};


class C : public A {
    protected : 
    int c;

    public: 
    void get_c() {
        cout << " Enter the value of 'c";
        cin >> c;
    }
};


class D : public B , public C {
    public : 
        void display() {
            cout << "\n Values stored : \n";
            cout << " a from B-side " << B::a << endl;
            cout << " a from C-side " << C::a << endl;
            cout << "b" << b << endl;
            cout << "c: " << c << endl;
        }
};

int main() {
    D obj;

    obj.B::get_a();
    obj.get_b();
    obj.C::get_a();
    obj.get_c();

    obj.display();
    return 0;
}