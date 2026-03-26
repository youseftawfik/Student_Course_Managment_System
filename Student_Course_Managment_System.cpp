#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;

int main()
{
    cout << "            *************************************************************************        " << endl;
    cout << "                              Student Course Management System                               " << endl;
    cout << "            *************************************************************************        " << endl;
    cout << endl;
    cout << "                                       Operation Menu                                        " << endl;
    cout << "                                       **************                                        " << endl;
    cout << "                                       1. Add Student.                                       " << endl;
    cout << "                                       2. Exit.                                              " << endl;

    int choice;

    Student s;

    while (true) {
        
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            s.addstudent();
        }
        else if (choice == 2) {
            break;
        }
        else {
            cout << "Invalid choice!\n";
        }
    }











    //Person p1;
    //p1.set_Name("Youssef");
    //p1.set_Age(32);
    //cout << "My Name is:" << p1.get_Name() << endl;
    //cout << "My Age is:" << p1.get_Age() << endl;


    //Student s;

    //s.set_ID(1);
    //s.set_Name("Ali");
    //s.set_GPA(3.5);

    //s.add_Course("Math");
    //s.add_Course("Math"); 
    //s.add_Course("CS");

    //s.Display();

    //cout << "Courses:\n";
    //s.get_Course();
}

