#include "Student.h"

void Student::set_ID(int id) {
     ID = id;
}
void Student::set_GPA(float gpa) {
    GPA = gpa;
}
int Student::get_ID() {
    return ID;
}
float Student::get_GPA() {
    return GPA;
}
void Student::add_Course(string course) {
    Course.insert(course);
}
void Student::get_Course() {
    for (auto c : Course)
    {
        cout << c << endl;
    }
}
void Student::Display() {
    cout << "ID: " << get_ID() << "Name: " << get_Name() << "GPA: " << get_GPA() << endl;
}

void Student::addstudent() {

    int id;
    string nam;
    float gpa;

    cout << "Enter ID:";
    cin >> id;

    for (auto s : students)
    {
        if (s.get_ID() == id)
        {
            cout << "Student Already Exists";
        }
    }

    cout << "Enter Student Name: ";
    cin >> nam;

    cout << "Enter Student GPA: ";
    cin >> gpa;

    Student stu;
    stu.set_ID(id);
    stu.set_Name(nam);
    stu.set_GPA(gpa);

    students.push_back(stu);

    cout << "Student Data Saved Successfully" << endl;
}
