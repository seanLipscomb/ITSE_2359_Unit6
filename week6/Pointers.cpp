#include <iostream>
#include <string>

using namespace std;

class Student {
    public:
        string name;
        int age;
        void display(){
            cout << "Name: " << name << endl << "Age: " << age << endl;
        }
};

int main()
{
    Student *students = new Student[3];
    students[0].name = "Alice";
    students[0].age = 20;
    students[1].name = "Ben";
    students[1].age = 21;
    students[2].name = "Chester";
    students[2].age = 29;

    for (int i = 0; i<3; i++)
    {
        students[i].display();
    }

    delete[] students;
    return 0;
}