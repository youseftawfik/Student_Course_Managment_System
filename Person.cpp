#include "Person.h"

Person::Person() {
	string name = " ";
	int age = 0;
}
Person::Person(string n, int a) {
	name = n;
	age = a;
}
void Person::set_Name(string n) {
	name = n;
}
void Person::set_Age(int n) {
	age = n;
}
string Person::get_Name() {
	return name;
}
int Person::get_Age() {
	return age;
}