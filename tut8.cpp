#include<iostream>
#include<iomanip>

using namespace std;
int main(){
 int a = 34;
 cout<<"a is a variable the value of a is "<<a<<endl;
 /*a is variable so now we are changing the variable a*/
 a = 45; /*we only write the name of the variable to change its value */
cout<<"The value of a is changed which is "<<a<<endl;

/*--------IF WE DO NOT WANT A VALUE TO BE CHANGED WE CAN USE CONSTANTS IN C++---------*/
const float pi = 3.14; /* The "const" keyword is used to define a constant value*/
 cout<<"The constant value of pi is "<<pi<<endl;

 /*-------Manipulators-------*/
 /*Manipulators are used to format data diplay*/
 /*One of the most popular are "endl" which we use to move to next  line*/
 /*to use more manipulator we will include one more header file called "iomanip" by using #include<iomanip>*/
 int c= 13, d = 12;
 const float e = 2.7; /*Here e is decleared as constant*/
 cout<<"The value of c is "<<setw(4)<<c<<endl;/*Here "setw()" is a manipulator which is used to add space let say 4 bit before next
 next value which is to be printed*/
 cout<<"The value of d is "<<setw(4)<<d<<endl; /* Set is called by "iomanip" by using #include<iomanip>*/
 cout<<"The value of e is "<<setw(4)<<e<<endl;

/*------- Operator Precedence-----------*/
/* Just as BODMAS rule c++ uses a ddifferent kind of rule to calculate complicated arithmetic calculations this is caleed 
order precendence- There are different pirority like which operator is to calculated first we can refer to cppreference.com
to know exact order of operator precendence */

float f = ((c*d)+e)/* Here according to operator precendence order first it will multiply the given then will do addition*/
/* Operator precendence order ma jo function phela ayga uspa bracket lagana hota ha and also associativity ka according (left to right 
or right o left) if both functions are at same place in operator precedence order - which will be mentined in the website*/
float g = ((((a*5)+e)-4)+85)

return 0;
}