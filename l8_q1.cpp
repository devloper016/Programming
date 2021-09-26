#include <iostream>
using namespace std;
class staff
{
protected:
 int code;
 string name;
 string generalEducation;
 string proEducation;
public:
 void setCode(int y)
 {
 code = y;
 }
 void setName(string s)
 {
 name = s;
 }
 void Set_Edu_Details(string a, string b)
 {
 generalEducation = a;
 proEducation = b;
 }
 void Display_Edu()
 {
 cout<<"\nHighest General Education: "<<generalEducation<<"\nHighest Professional Education: "<<proEducation<<endl;
 }
};
class teacher : public staff
{
protected:
 string subject;
 string publication;
public:
 void setSubject(string s)
 {
 subject = s;
 }
 void setPublication(string p)
 {
 publication = p;
 }
 void print_details()
 {
 cout<<"TEACHER"<<endl;
 cout<<"Code: "<<code<<"\nName: "<<name<<"\nSubject: "<<subject <<"\nPublication: "<<publication<<endl;
 cout<<endl;
 }
};
class typist : public staff
{
protected:
 int speed;
 string work;
public:
 void setSpeed(int v)
 {
 speed = v;
 }
 void setWork(string w){
  work = w;   
 }
 void print_details()
 {
 cout<<"TYPIST"<<endl;
 cout<<"Code: "<<code<<"\nName: "<<name<<"\nWork: "<<work<<"\nSpeed: "<<speed<<endl;
 cout<<endl;
 }
};
class casual_typist : public typist
{
 int salary;
};
class regular_typist : public typist
{
 int salary;
};
//class Officer
class officer : public staff
{
protected:
 char grade;
 public:
 void setGrade(char x)
 {
 grade = x;
 }
 void print_details()
 {
 cout<<"OFFICER"<<endl;
 cout<<"Code: "<<code<<"\nName: "<<name<<"\nGrade: "<<grade<<endl;
 cout<<endl;
 }
};
int main()
{
 teacher Tea1;
 Tea1.setCode(100);
 Tea1.setName("Max Tegmark");
 Tea1.setSubject("Physics");
 Tea1.setPublication("Our Mathematical Universe");
 Tea1.print_details();

 regular_typist typ1;
 casual_typist typ2;
 typ1.setCode(110);
 typ2.setCode(111);
 typ1.setName("Michael");
 typ2.setName("Jason");
 typ1.setWork("Regular");
 typ2.setWork("Casual");
 typ1.setSpeed(80);
 typ2.setSpeed(60); 
 typ1.print_details();
 typ2.print_details();

 officer Off1;
 Off1.setCode(123);
 Off1.setName("James");
 Off1.setGrade('A');
 Off1.print_details();
 
 Tea1.Set_Edu_Details("M.Sc" , "PHD_Physics");
 Off1.Set_Edu_Details( "B.A.", "BBA");
 cout<<endl<<"EDUCATION DETAILS"<<endl;
 cout<<"TEAHCER: ";
 Tea1.Display_Edu();
 cout<<endl;
 cout<<"OFFICER: ";
 Off1.Display_Edu();
 return 0;
}