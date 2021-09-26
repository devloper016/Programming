#include<iostream>
 using namespace std;
 class count_object
 {
     private:
         static int count;
     public:
         count_object()
         {
             count++;
         }
     static int objcount(){
         return count;
     }
 };
 int count_object::count;
 main()
 {
     count_object obj1;
     count_object obj2;
     count_object obj3;
     count_object obj4;
     int c;
     c= count_object::objcount();
     cout<<"Number of objects are: "<<c;

 }