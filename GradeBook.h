#pragma once
#include<iostream>
#include<string>

class GradeBook {
public:
	explicit GradeBook(std::string);
	void setCourseName(std::string);
	std::string getCourseName() const;
	void displayMessage() const; 
	void determineClassAverade() const;
private:
	std::string courseName;
};