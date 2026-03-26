#pragma once
#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>
#include <vector>
#include "Person.h"
#include <set>
using namespace std;

//vector<Student> students;

class Student : public Person
{
private:
	int ID;
	float GPA;
	set<string> Course;
public:
	vector<Student> students;
	//Student();
	//Student(int id, float gpa);
	void set_ID(int id);
	void set_GPA(float gpa);
	int get_ID();
	float get_GPA();
	void add_Course(string course);
	void get_Course();
	void Display();
	void addstudent();
	//void removestudent(int id);
	//Student getstudents();
	//Student searchstudent(int id);
	//void enrollstudent();
};


#endif
