#include"student.h"

static int counter=0;

student::student(){
	id=counter;
	counter++;
	quizcap=3;
	quiztaken=0;
	 gpa=0;
	 	quizscore=new float[quizcap];
}

student::student(int qc,float grade){

	quizcap=qc;
	gpa=grade;
	id=counter;
	counter++;
	quiztaken=0;
	quizscore=new float[quizcap];
}

student::student(const student& a){
	id=a.id;
	quizcap=a.quizcap;
	quiztaken=a.quiztaken;
	gpa=a.gpa;
	quizscore=new float[quizcap];
	for(int i=0;i<quiztaken;i++)
	{
		quizscore[i]=a.quizscore[i];
	}
}

student::~student(){
	delete[]quizscore;
	quizscore=nullptr;
}

void student::addquizscore(int a){
	
	 if(quiztaken<quizcap)
	{
		quizscore[quiztaken]=a;
		quiztaken++;
	}
	 else
	{
		cout<<"quiz capacity full"<<endl;
	}

}

void student::setgpa(float grade){
	gpa=grade;
}

float student::getgpa(){
	return gpa;
}

void student::print()const{

	cout<<"id="<<id<<endl;
	cout<<"quiztaken"<<quiztaken<<endl;
	cout<<"gpa="<<gpa<<endl;
	for(int i=0;i<quiztaken;i++)
	{
		cout<<"quiz"<<i<<"scores are"<<quizscore[i]<<endl;
	}

}

bool student::compare(student a){
	if(gpa>a.gpa)
	{
		return true;
	}
	else
	{ 
		return false;
	}
}
void student::updatescr(int n,int s){
	if(quiztaken=n)
	{
		quizscore[n]=s;
		quiztaken++;
	}
	else
	{ 
		cout<<"quiz not taken"<<endl;

	}
}

void student::printarray(student  *a)
{
	for(int i=0;i<3;i++)
		{cout<<a[i].id<<endl;
	cout<<a[i].gpa;
	for(int j=0;j<a[i].quizcap;i++)
	{
		cout<<a[i].quizscore[j]<<endl;
	}

	}

	float* student::returnarry(student *a){
	
		{int index=0;
			for(int i=0;i<3;i+=)
			{
				if(a[i].gpa<2.0)
					{
						a[i+1].gpa=a[i].gpa;
						index=i;
				}
			
			}
			a[index].gpa=0;
