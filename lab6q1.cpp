#include <iostream>
using namespace std;
class DB;
class DM
{
    int meter, centimeter;

public:
    void input()
    {
        cout << "\n Enter meter and centimeter: ";
        cin >> meter >> centimeter;
    } 

    void display()
    {
        cout << "\n\n Meter: " << meter;
        cout << "\n Centimeter: " << centimeter<<endl;
    }

    friend void add(DB a1, DM a2);
};

class DB
{
    int feet, inches;

public:
    void input()
    {
        cout << "\n\n Enter feet and inches: ";
        cin >> feet >> inches;
    }

    void display()
    {
        cout << "\n Feet: " << feet;
        cout << "\n Inches: " << inches;
    }

    friend void add(DB a1, DM a2);
};

void add(DB a1, DM a2)
{
    int choice;
 cout<<"Press 0 for meter-centimeter:"<<endl;
 cout<<"Press 1 for feet-inches:"<<endl;
  cin>>choice;
 if(choice==0)
 {
    DM d;
    int t = (a2.meter * 100 + a2.centimeter + a1.feet * 30.48 + a1.inches * 2.54);
    if (t >= 100)
    {
        d.meter = t / 100;
        d.centimeter = t % 100;
    }
    else
    {
        d.meter = 0;
        d.centimeter = t;
    }
    d.display();
}
else
 {
  DB d;
  int x;
  x=(a2.meter*39.37+a2.centimeter*.3937008+a1.feet*12+a1.inches);
  if(x>=12)
  {
   d.feet=x/12;
   d.inches=x%12;
  }
  else
  {
   d.feet=0;
   d.inches=x;
  }
  d.display();
 }
}

int main()
{
    DB a1;
    DM a2;

    a1.input();
    a2.input();

    a1.display();
    a2.display();

    cout << "Addition: "<<endl;
    add(a1, a2);

    return 0;
}