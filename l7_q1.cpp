#include <iostream>
using namespace std;
class Coordinate
{
private:
 int x,y,z;
public:
 Coordinate()
 {
 x=0;
 y=0;
 z=0;
 }
 void set(int a=0, int b=0 , int c=0)
 {
 x = a;
 y = b;
 z = c;
 }
 void Display(void)
 {
 cout<<"Value of x: "<<x<<endl;
 cout<<"Value of y: "<<y<<endl;
 cout<<"Value of z: "<<z<<endl;
  }
 Coordinate operator ++()
 {
 Coordinate mlt;
 mlt.x = x++;
 mlt.y = y++;
 mlt.z = z++;
 return mlt;
 }
 Coordinate operator --()
 {
 Coordinate mlt;
 mlt.x = x--;
 mlt.y = y--;
 mlt.z = z--;
 return mlt;
 }
 Coordinate operator +=(int d)
 {
 Coordinate mlt;
 mlt.x = x+=d;
 mlt.y = y+=d;
 mlt.z = z+=d;
 return mlt;
 }
 bool operator ==(Coordinate r)
 {
 Coordinate mlt;
 if (mlt.x == r.x && mlt.y == r.y && mlt.z == r.z)
 {
  return true;
 }
 else
 {
 return false;
 }
 }
};
int main()
{
 Coordinate obj1;
 cout<<"\n Initial Values"<<endl;
 obj1.set(1,2,3);
 obj1.Display();
 cout<<endl;
 cout<<" incrementing"<<endl;
 ++obj1;
 obj1.Display();
 cout<<endl;
 cout<<" decrementing"<<endl;
 --obj1;
 obj1.Display();
 cout<<endl;
 cout<<" addition"<<endl;
 obj1+=3;
 obj1.Display();
 Coordinate obj2 , obj3;
 obj2.set(2,3,6);
 obj3.set(4,5,7);
 cout<<endl;
 cout<<"\n comparison"<<endl;
 cout<<"True(1)/False(0)"<<endl;
 cout<<(obj2==obj3)<<endl;
 return 0;
}