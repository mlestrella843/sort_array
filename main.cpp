#include <iostream>
using namespace std;

//programs that sort an integer array.
int main() {
  
//int a[4] = {10,25,35,40,55};
int b[6] = {15,30,5,20,45,65}; 

int i; int j; int sizeb = 6; int temp = 0;
  
  for (j=0; j<sizeb; j++){  
     for (i=0; i<sizeb ; i++){    
        if( b[i] > b[i+1] ){
            temp = b[i];
            b[i] = b[i+1];
            b[i+1] = temp;    
        }       
     }   
  }
  for(int i=0; i< sizeb; i++){
    cout<<b[i]; cout<<",";
  }  
  return 0;
}