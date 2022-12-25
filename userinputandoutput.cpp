#include <iostream> /*iostream stands for input and output stream*/
 using namespace std;/*if not using it we have to use std::cout*/
int main() {
    int num1, num2;
    cout<<" Enter the value of number 1: ";/*this << is called insertation operator because used to giver output */
    cin>>num1;  /*>>is called Extraction operator because use to take user input*/
        /*we can use  cin>> to take input from the user*/

    cout<<" Enter the value of number 2: ";
    cin>>num2;
    cout<<" The sum is: "<< num1+num2; /* "+" is used to sum */ /*we can print multiple things using << in same cout command3*/
    
    
    return 0;
}