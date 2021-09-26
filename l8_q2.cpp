#include <iostream>
#include <math.h>
using namespace std;
class Shape
{
 public:
 virtual void Display_Volume(){}
virtual void Display_Area(){}
};
class TwoDimensional : public Shape
{
 private:
 float area;
public:
 //Triangle
 void find_area(float a , float b, float c)
 {
 float s = (a + b + c)/2;
 float x = s*((s - a)*(s - b)*(s - c));
 area = sqrt(x);
 }
 //Rectangle
 void find_area(float l, float b)
 {
 area = l*b;
 }
 //Circle
 void find_area(float r)
 {
 area = 3.14115*r*r;
 }
 void Display_Area()
 {
 cout<<"Area : "<<area<<endl;
 }
};
class ThreeDimensional : public Shape
{
 private:
 float volume;
 public:
 //Box
 void find_volume(float a, float b, float c)
 {
 volume = a*b*c;
 }
 //Cone
 void find_volume(float i, float j,string type ) {
 float vol = (3.1415*i*i*j);
 volume = vol/3;
 }
 //Cylinder
 void find_volume(int r, int h)
 {
 volume = (3.1415*r*r*h);
 }
 //Sphere
 void find_volume(float s)
 {
 volume = (4 * 3.1415 * s*s*s)/3;
 }
 void Display_Volume()
 {
 cout<<"Volume: "<<volume<<endl;
 }
};
int main()
{
 cout<<"Triangle"<<endl;
 Shape * Triangle;
 TwoDimensional Tri;
 Triangle = &Tri;
 Tri.find_area(2,5,4);
 Triangle->Display_Area();
 cout<<endl;
 
 cout<<"Rectangle"<<endl;
 Shape * Rectangle;
 TwoDimensional Rec;
 Rectangle = &Rec;
 Rec.find_area(3,5);
 Rectangle->Display_Area();
 cout<<endl;

 cout<<"Circle"<<endl;
 Shape*Circle;
 TwoDimensional Cr;
 Circle = &Cr;
 Cr.find_area(4);
 Circle->Display_Area();
 cout<<endl;

 cout<<"Box"<<endl;
 Shape*Box;
 ThreeDimensional Bo;
 Box = &Bo;
 Bo.find_volume(2,6,9);
 Box->Display_Volume();
 cout<<endl;

 cout<<"Cone"<<endl;
 Shape *Cone;
 ThreeDimensional Co;
 Cone = &Co;
 Co.find_volume(5.2,9,"Cone");
 Cone->Display_Volume();
 cout<<endl;

 cout<<"Cylinder"<<endl;
 Shape * Cylinder;
 ThreeDimensional Cy;
 Cylinder = &Cy;
 Cy.find_volume(6,2);
 Cylinder->Display_Volume();
 cout<<endl;

 cout<<"Sphere"<<endl;
 Shape * Sphere;
 ThreeDimensional Sph;
 Sphere = &Sph;
 Sph.find_volume(8);
 Sphere->Display_Volume();
 cout<<endl;
 return 0;
}