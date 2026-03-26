#pragma once
#ifndef PERSON_H_
#define PERSON_H_
#include<string>
#include <iostream>
using namespace std;

class Person
{
private:
	string name;
	int age;
public:
	Person();
	Person(string n, int a);
	void set_Name(string n);
	void set_Age(int a);
	string get_Name();
	int get_Age();
};

#endif 