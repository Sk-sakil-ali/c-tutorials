#include <iostream>
 using namespace std;

  float c = 45; /*THI IS A GLOBAL VARIABLE*/
 int main(){
    
    float a, b;
    cout<<"Enter the vaue of a: ";
    cin>>a;
    cout<<"Enter the value of b: "; cin>>b;
     float c = a+b;
    cout<<endl<<"sum is:  "<<c<<endl;
    /*Calling Global C*//*Normally local variable gets priority*/
    cout<<"This is value of Global C variable "<<::c; /* "::"this operator is called scope resolution operator
    which is used to call global variable*/

    /*Double and float*/
    float d = 34.4f;
    long double e = 34.4l;
    cout<<endl<<"The value of D is: "<<d<<endl<<"The value of e is: "<<e<<endl;
    /*By defult c++ compiler consider 34.4 as double*/
    /* to turn 34.4 as float put "f" after it */

    /*-------REFERENCE VARIABLES---------*/   
    /* refeence variable is used to assign a value with multiples names*/
     float x = 455;
     cout<<"Valuea of x is "<<x<<endl;
      float & y = x; /*Now y is a reference variable containing the variable x or value of y and x is same*/
     cout<<"value of y is "<<y<<endl;
   

    /*-------Typecasting--- Typecasting is changing variable from one form to another form for example
    from changing int to float or vice versa*/
    int i = 45; /*Now it is a integer*/
    float j = 45.56; /*Now this is a float*/
    cout<<"This is the value of a "<<(float)a; /*By using (float)a we have converted variable-i from
    integer to float*/
    cout<<endl<<float(a)<<endl; /* (float)a and float(a) is same*/
    /*we can do typecasting with all variables*/
    cout<<"The integral value of i+j is "<<i+int(j)<<endl;
    cout<<"The decimal value of i+j is "<<float(i)+float(j)<<endl;

  return 0; 
  }