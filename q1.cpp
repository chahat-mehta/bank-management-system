#include<iostream>
using namespace std;
class student{
public:
string name;
int id;
student(string n,int i)
{
name=n;
id=i;
}
void display()
{
cout<<name<<id;
}};
int main(){
student s1("\nchahat\n",26);//implicit constructor call
student s2=student("\nkashish\n",50);//explicit constructor call
s1.display();
s2.display();
}
