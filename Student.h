#pragma once
#include <iostream>
#include <string>
using namespace std;

typedef struct FIO {
	string Name;
	string SurName;
	string LastName;
};

class Student {
private:
	FIO Value;
	int grade;
public:
	Student();
	Student(const Student& obj);
	~Student();
	void SetStudent();
	int GetGrade();
	void Print(ostream& out);
};