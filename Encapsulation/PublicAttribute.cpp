#include<iostream>
using namespace std;

class Employee {
    public:
        int Salary;
};

int main() {
    Employee myObj;
    myObj.Salary = 50000;
    cout <<myObj.Salary;
    return 0;
}