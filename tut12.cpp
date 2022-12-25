//WE WILL LEARN ABOUT POINTERS HERE
#include<iostream>
using namespace std;

int main(){

//What is Pointer?
/*Pointer is a data type of variable which holds the address of other data types*/

int a = 3;
int* b = &a; // Means ak aisa pointer name b banao jiska value a ka address ka value variable a ka address ho
// $ --- stands for address of operator (address of the variable in ram where it is stored)

// therefore we can say that b is a pointer 
cout<<"The address of the vairiable a is "<<b<<endl;
cout<<"The address of the variable a is "<<&a<<endl; // Both will print the same

// * --- stands for Derefencin of operator-- Value of 
cout<<"The value at address b is "<<*b<<endl; //Is address par kya value ha 

int** c = &b; //this is called point to pointer it is used to get the address of a pointer
//AK aisa pointer jo ki pointer ki address ko store karta ha 
cout<<"The address of pointer b is "<<c<<endl;
cout<<"The value of address c means the value of address b "<<**c<<endl;

return 0;    
}