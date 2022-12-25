//WE WILL LEARN ABOUT BREAK AND CONTINUE IN THIS
#include<iostream>
using namespace std;

int main(){
    
for(int i = 0; i<10; i++){
 
      cout<<i<<endl;
      if(i==2){
        break; //break means exit the loop
      }
}

for(int c = 1; c<10; c++){
     
     if(c==2){
        continue; //continue means it will skip this part and will move to next one
      //for i==2 stop it will stop here  and move to next part in this loop i.e for i=3
     }
     cout<<c<<endl;
}

return 0;
}
