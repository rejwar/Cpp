#include<iostream>
using namespace std;


class Student {
    public: 
    string Name;
    float Cgpa;
    int Id;
    string Email;

};

int main() {
    Student S1;

    S1.Name = "Md. Rejwar Rahman Rifat";
    S1.Cgpa = 6.00;
    S1.Email = "rejwar";
    S1.Id = 42;

    cout << "Name" <<S1.Name << endl;
    cout << "ID" << S1.Cgpa << endl;
    cout << "Email " << S1.Email << endl;
    cout << "CGPA" << S1.Cgpa;

    return 0;
}