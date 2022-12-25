#include<iostream>
using namespace std;
int main(){

/*-----LOOPS IN C++*/
/* there are 3 types of loop in c++
1. FOR LOOP
2. WHILE LOOP
3.DO-WHILE LOOP
*/

/*--------FOR LOOP--------------*/
// Syntax of for loop
/** for(initialization; condition; updation){
    loop body(c++ code)
 }
*/
for(int i = 0; i <= 10; i++) /*int i = 0 is initilization while will run only once ;i<10  is the condition for which the program wll execute;i++ is the updation while will be update after the program is executed nad returned */
{
    cout<<i<<endl;
    //we can also add updation here, if writeen here then no need to write in upper part
}

/*infinite for loop*/
/* for(int a= 1; a<2;) //we will use a condition that is always true
 {
    cout<<"This is a infinite for loop"<<endl;
 }
*/

/*----------While Loop-----------------*/
//SYNATX
/*while(condition):
{
    statements;
}
*/
;
float f = 1;
while(f<4)
{
 cout<<f<<endl;
 f++;} // we can also create infinite while loop just like for loop

 /*------------DO WHILE LOOP---------------*/
 //syntax
 /* do{
    statment 
  }while(condition); */

  int d = 2;
  do{
    cout<<d<<endl;
    d++;
  }while(d<=10); // If this condition is false then the program will execute for one time this is the main difference between while and do-whilw loop
// six table by for loop
/*for(int e = 1; e<=10; e++){
    cout<<"6 multiplied by "<<e<<" = "<<(e*6)<<endl;
 }*/

 // six table by while loop
 /*int g = 1;
 while(g<=10){
    cout<<"6 multiplied by "<<g<<"="<<(g*6)<<endl;
    g++;
 } */

 //six table by do-while
 int h = 1;
 do{
    cout<<"6 multiplied by "<<h<<" is "<<(6*h)<<endl;
    h++;
 }while(h<=10);


return 0;
}