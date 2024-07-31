 //           STUDENT RESULT RECORD           //
//___________________________________________//
#include<iostream>
#include<string.h>
using namespace std;
class student{
	private:
		char student_name[20];
		float total_marks;
		float percentage;
	public:
		void student_modify(char name[20],float t);
		void display();
};
int main(){
	int n,i;
	cout<<"\t\t\t\t\t______________________________________\n";
	cout<<"\t\t\t\t\t\tSTUDENT RESULT RECORD\n";
	cout<<"\t\t\t\t\t______________________________________\n\n";
	cout<<"enter no. of student: ";
	cin>>n;
	student s[n];     //array
	for(i=0;i<n;i++){
	char name[20];
	float total_marks;
	float s1,s2,s3,s4,s5;
	cout<<"\nDetail of student"<<i+1<<":";
	cout<<"\nEnter student name: ";
	cin.ignore();
	cin.getline(name,20);
	cout<<"enter marks out of 100"<<endl;
	cout<<"subject 1 marks: ";
	cin>>s1;
	cout<<"subject 2 marks: ";
	cin>>s2;
	cout<<"subject 3 marks: ";
	cin>>s3;
	cout<<"subject 4 marks: ";
	cin>>s4;
	cout<<"subject 5 marks: ";
	cin>>s5;
	total_marks=s1+s2+s3+s4+s5;
	s[i].student_modify(name,total_marks);
    }
    cout<<"\t\t*************************************************************************************";
    cout<<"\n\n\t\t\t\t\tFollowing are the details of students:\n";
    cout<<"\t\t\t\t\t______________________________________\n\n";
	for(i=0;i<n;i++){
	cout<<"\nstudent"<<i+1<<":\n";
	s[i].display();
    }
	return 0;
}
void student :: student_modify(char name[20],float t)   //  " :: " scope 
		{
			strcpy(student_name, name);
			total_marks=t;
			float p=t/5;
			percentage=p;
		}
void student :: display(){
			cout<<"student name: "<<student_name;
			cout<<"\ntotal marks( out of 500): "<<total_marks;
			cout<<"\npercentage: "<<percentage<<"%" <<endl;
		}
