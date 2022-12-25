/*---------------CONTROL STRUCTURES------------------*/
#include<iostream>
using namespace std;
int main(){
 
 /* selection control structure- If else statement/ladder */
 int age;
 cout<<"Tell me your age "<<endl;
cin>>age;

if (age<18)
{
    cout<<"You cannot drive";
}
else if((age==18) && (age>0)){
    cout<<"You can get a driving licence";
}
else if (age<1)
{
    cout<<"You are not yet born ";
}

else{
    cout<<"You can drive";
}

/* selection control structure- switch case statement*/

switch(age) /* The stating of switch case and the variable name for which the action will be performed*/
{
    case 18: /*The case for the the action will be performed*/
    cout<<"You are 18"<<endl; /*action*/
    break;/* break sa code yehi par stop ho jayga aga tha compile nahi karega*/
   /*IF WE DO NOT ADD BREAK HERE THEN IT WILL PRINT ALL THE CASES*/
  case 22:
    cout<<"Your age is 22"<<endl;
    break;

  case 12:

   cout<<"Your age is 12 "<<endl;
   break;

   default: /*will perform for all the values except the above specified case*/
   cout<<"No special cases"<<endl;
}




return 0;
    }