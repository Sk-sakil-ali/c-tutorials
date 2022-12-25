//We will learn about arrays in this 
/*Array is a collection of items of similar type stored in contiguous memory allocation*/
#include<iostream>

using namespace std;
int main()
{
   int marks[4] = {23, 45, 55, 80}; //This is a array which is containing 4 integer type marks

cout<<marks[0]<<endl; //This will print the first marks in the array
cout<<marks[1]<<endl; //This will print the second marks in the array
cout<<marks[2]<<endl; //This will print the third marks in the array
cout<<marks[3]<<endl; //This will print the fourth marks in the array

//Second way to declare array

int mathmarks[4];
mathmarks[0] = 31;
mathmarks[1] = 21;
mathmarks[2] - 15;
mathmarks[3] = 10;

cout<<mathmarks[0]<<endl;
cout<<mathmarks[1]<<endl;
cout<<mathmarks[3]<<endl;

//changing values in arrays
marks[2] = 455; //Now the value of third integer in array marks will be changed 

//print arrays using loop
for(int i = 0; i<4;i++){
    cout<<"Printing array using for loop"<<endl;
    cout<<marks[i]<<endl;
}



return 0;
}









