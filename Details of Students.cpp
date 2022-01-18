/*program to display names,rollno and grades of 3 students who have appeared in the
examination.Declare the class of a name,rollno and grade.create an array of class objects.Read and
display the contents of an array.*/
#include<iostream>
using namespace std;
class student
{
public:
char name[20];
float grade;
int rollno;
};
int main()
{
student s[3];
int i;
for(i=0;i<3;i++)
{
cout<<"enter name"<<endl;
cin>>s[i].name;
cout<<"enter grade"<<endl;
cin>>s[i].grade;
cout<<"enter rollno"<<endl;
cin>>s[i].rollno;
cout<<"STUDENT DETAILS"<<endl;
cout<<"..............."<<endl;
for(i=0;i<3;i++)
cout<<"student rollno"<<s[i].rollno<<endl<<"name"<<s[i].name<<endl<<"grade"<<s[i].grade<<endl;
}
