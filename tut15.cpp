//WE WILL LERAN ABOUT FUNCTIONS HERE
#include<iostream>

using namespace std;

int sum(int a, int b){

    int c = a+b;
    return c;
}/*here we have created a function named sum to add two numbers*/

//----FUNCTION PROTOTYPE---------------

//syntax
/* type function-name(arguments);*/
//int sub(int c, int d);---->Acceptable
//int sub(int c, d);----> Not Acceptable
//int sub(int, int);---->Acceptable
int sub(int c, int d);


int main(){
 
 int num1, num2;
 cout<<"ENTER THE FIRST NUMBER ";
 cin>>num1;
cout<<"ENTER THE VALUE OF SECOND NUMBER ";
cin>>num2;
cout<<"THE SUM IS "<<sum(num1, num2); /*if we write the sum function after the int main function
then this will not work as sum function is not deffined till now */ 
/*To solve this problem we use function prototype*/
cout<<endl<<"THE SUBSTRACTION IS  "<<sub(num1, num2);



return 0;//return 0 tells the os that program is successfully executed 
}

int sub(int c, int d){

    int e = c-d;
    return e;
}