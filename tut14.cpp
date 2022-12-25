#include<iostream>
/*STRUCTURE IS USED TO STORE DIFFERENT TYPES OF DATA IN A STRUCTURED WAYS LIKE ARRAYS*/
/*STRUCTURE IS A USER DEFINED FUNCTION SO WE WILL AT FIRST WRITE THIS MAIN CODE BEFORE INT MAIN*/
struct employee {
    /*data will go here*/
    int ID;
    char favChar;
   int salary;
   long long int mobile;
};/*"struct" is the keyword to use structure and employe is the name then we will declare type of variables and variable
name inside it */
typedef struct employee1 {
    /*data will go here*/
    int ID;
    char favChar;
   long int salary;
   long long int mobile;
} ep;
/*by putting typedef in front and ep(we can replace ep with anything) in the end of this structure we can call this structure by only
" ep employee1 name;"  */

/*---------------union-------------------------*/
/*In union we can use only one of given data at a time if we assign a value to some other variable then
the previous one wil be overwritten, for example if we assign value to money.rice = 12; after that we 
asigm pound = 13 the rice will overwritten or erased */
union money{
   int rice;
   char car;
   float pound; };

using namespace std;


int main(){
    struct employee sakil; // employee is the name of structure we had made above nad sakil is name of this particular subset 
    sakil.ID = 1; //This will assign value to ID in subset sakil andd structure employee
    sakil.favChar = 'S';
    sakil.salary = 12430;
    sakil.mobile =  9163425389;

    cout<<sakil.ID<<endl;//This will print the salary of sakil in the structure named employee
       cout<<sakil.salary<<endl;//This will print the salary of sakil in the structure named employee
          cout<<sakil.favChar<<endl;//This will print the salary of sakil in the structure named employee
             cout<<sakil<<endl;//This will print the salary of sakil in the structure named employee


/*------------NOW WE WILL LEARN ABOUT UNION------------------*/
//Union is like structure

union money m1;
m1.rice = 12;

cout<<m1.rice<<endl;

/*-------------Now we will learn about Enum------------------------*/
/* We can assign a ordered intergral value to the in enum */
enum Meal{ breakfast, lunch, dinner};
cout<<breakfast; /*This will print 0 as this is the first element of Meal*/
cout<<lunch; /*This will print 1 as this is the second element of Meal*/
cout<<breakfast; /*This will print 2 as this is the third element of Meal*/



; //In union unlike structure we can only use a one variable at a 
return 0;
}