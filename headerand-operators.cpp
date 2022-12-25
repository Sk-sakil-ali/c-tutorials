#include <iostream> 
/*This is a system defined header file*/
 /* #include <example.h> /*This is a user defined header file*//*This will produce an error if example.h is not present*/
using namespace std;
int main(){
   
   cout<<"operators in c++"<<endl; /*end1 can be used to end line*/

   /*Arithemetic operators*/
   int a=4, b=5;
   
    cout<<" the value of a+b is :"<<a+b<<endl; /*used to add*/
    cout<<" the value of a-b is :"<<a-b<<endl;/*used to substract*/
    cout<<" the value of a*b is :"<<a*b<<endl; /*used to used to multiply*/
    cout<<" the value of a/b is :"<<a/b<<endl; /*used to divide*/
    cout<<" the value of a%b is :"<<a%b<<endl; /*used to get mudulo means remainder after division*/
    cout<<" the value of a++ is :"<<a++<<endl; /*used to print a+1*//*after this point value of a will be a+1*/
    cout<<" the value of a-- is :"<<a--<<endl; /*used to print a-1*//*after this point value of a will be a-1*/
    cout<<" the value of ++a is :"<<++a<<endl;/*means first a+1 then print*/
    cout<<" the value of --a is :"<<--a<<endl;/*means first a-1 then print*/
    
    /*ASSIGMENT OPERATORS - USED TO ASIGN VALUES TO VARIABLES*/
     int d = 1; 
     int c = 2;
     char sa = a; 
     float pi = 3.14; 
     string name = "sakil";
    cout<<endl<<endl;
   /*COMPARISON OPERATORS- USED TO COMPARE TWO VALUES*/
   cout<<"Following are the comparison operators in C++"<<endl ;
    cout<<" the value of a == b is "<<(a==b)<<endl;/* Equal to function*/
    cout<<" the value of a != b is "<<(a!=b)<<endl;/*NOT EQUAL TO FUNCTION*/
    cout<<" the value of a >= b is "<<(a>=b)<<endl;/* GREATER THAN EQUAL TO FUNCTION */
    cout<<" the value of a <= b is "<<(a<=b)<<endl;/* SMALLER THAN EQUAL TO FUNCTION*/
    cout<<" the value of a > b is "<<(a>b)<<endl;/* GREATER THAN FUNCTION*/
    cout<<" the value of a < b is "<<(a<b)<<endl;/*SMALLER THAN FUNCTION*/
    /* FOT TRUE THAT OUTPUT WILL BE 1 AND FOR FALSE THE OUTPUT WILL BE 0*/
    cout<<endl<<endl;
 
    /*LOGICAL OPERAORS- SIMILAR TO COMPARISON OPERATORS*/
     cout<<"Following are the logical operators"<<endl;
     cout<<"This is a logical and operator "<<((a==b) && (a<b))<<endl;/*If both the function are 
     true then output will be true*//*This is called LOGICAL AND OPERATOR*/
     cout<<"This is a logical or operator "<<((a==b) || (a,b))<<endl;/*If any one of the function is true
     then the output will be true*/
     cout<<"This is a logical not operator "<<(!(a==b))<<endl;/*Not logical operator turns the answer 
     opposite means if the answer is true then the output will be false and vice versa*/
    
 
 return 0;

}