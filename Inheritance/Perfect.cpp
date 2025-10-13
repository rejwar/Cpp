#include<iostream>
using namespace std;

class Student {
    protected: 
        string name;
        int id;
        string course;

    public: 
        void setStudentInfo(string n, int i , string c) {
            name = n;
            id = i;
            course = c;
        }


        void displayStudentInfo(){
            cout << "Name : " <<name << endl;
            cout << "Id : " << id << endl;
            cout << "Course :" << course << endl;
        }
};

class Section : public Student {
    public: 
    string Section;

    void setSection (string s) {
        Section = s;

    }

    void displaySection() {
        cout << "Section : " <<Section << endl;
    }
};

int main() {
    Section std1;

    std1.setStudentInfo("Md. Rejwar Rahman Rifat" , 41250102674 , "C++ Programming");
    std1.setSection("3A");
    std1.displaySection();
    std1.displaySection();
}