#include<iostream>
using namespace std;

class student{
private:
	
	int id;
	float *quizscore;
	int quizcap;
	int quiztaken;
	float gpa;

public:
	student();
	student(int,float);
	student(const student&);
	~student();
	void addquizscore(int);
	void setgpa(float);
	float getgpa();
	void print() const;
	bool compare(student);
	void updatescr(int ,int);
	void printarray( student *a);
	float* returnarry( student *a);
};