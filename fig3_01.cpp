#include<iostream>
#include"GradeBook.h"
using namespace std;

int main() {
	string nameOfCourse;
	GradeBook gradeBook1("CS101 Introduction to C++ Programming");
	GradeBook gradeBook2("CS102 C++ Data Structure");

	cout << "gradeBook1's initial name is:" << gradeBook1.getCourseName()
		<< "\ngradeBook2's initial name is::" << gradeBook2.getCourseName()
		<< endl;

	gradeBook1.setCourseName("CS101 C++ Programming");

	cout << "gradeBook1's course name is:" << gradeBook1.getCourseName()
		<< "\ngradeBook2's course name is::" << gradeBook2.getCourseName()
		<< endl;
}