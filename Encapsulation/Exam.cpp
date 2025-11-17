#include<iostream>
using namespace std;

class Student {
    private: 
    string name;
    int id;


    public: 
            void SetData(string n, int i) {
                name = n;
                id = i;
            }

            void ShowInfo() {
                cout<< "Name :" <<name << "\nId: " << id<<endl;
            }
};

int main() {
    Student s;

    s.SetData("Rifat" , 41250102674);
    s.ShowInfo();

    return 0;
}