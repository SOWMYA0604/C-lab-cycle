/*program to read the data of N employee and compute Net salary of each employee(DA=54% of
basic and dincome tax (IT)=30% of the gross salary)*/
#include<iostream>
using namespace std;
class employee
{
public:
int emp_no;
string name;
float emp_basic;
float DA;
float IT;
float net_salary;
};
int main()
{
int n,i;
cout<<"enter the number of employees"<<endl;
cin>>n;
employee e[n];
for (i=0;i<n;i++)
{
cout<<"enter employee number"<<endl;
cin>>e[i].emp_no;
cout<<endl;
cout<<"enter employee name"<<endl;
cin>>e[i].name;
cout<<endl;
cout<<"enter employee basic salary"<<endl;
cin>>e[i].emp_basic;
cout<<endl;
}
for(i=0;i<n;i++)
{
e[i].DA=0.52*e[i].emp_basic;
e[i].IT=0.3*e[i].emp_basic;
e[i].net_salary=e[i].emp_basic+e[i].DA-e[i].IT;
cout<<"details of "<<e[i].name<<endl;
cout<<endl;
cout<<"employee number "<<e[i].emp_no<<endl;
cout<<"basic salary "<<e[i].emp_basic<<endl;
cout<<"employee DA "<<e[i].DA<<endl;
cout<<"Income Tax "<<e[i].IT<<endl;
cout<<"Net salary "<<e[i].net_salary<<endl;
cout<<endl;
}
}

