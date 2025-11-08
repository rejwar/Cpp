#include<iostream>
using namespace std; 

class Student {
    public: 
    string name;
    int id;
    string email;
    float cgpa;

};

int main() {
    Student s1;

    s1.name = " Md. Rejwar Rahman Rifat";
    s1.cgpa = 4.00;
    s1.id = 41250102674;
    s1.email = "riafadfaefdj;fa";


    cout << "Name :" <<s1.name<<endl;
    cout << "ID :" <<s1.id << endl;
    cout << " Email " << s1.email << endl;
    cout << "CGPA" << s1.cgpa <<endl;

    return 0;
}