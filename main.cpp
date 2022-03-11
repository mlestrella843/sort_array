#include <iostream>
using namespace std;


//function that sort an array and prints.
void sort_array( int array[], int sizeb ){
  int i;int j; int temp=0;
  for (j=0; j<sizeb; j++){  
     for (i=0; i<sizeb ; i++){    
        if( array[i] > array[i+1] ){
            temp = array[i];
            array[i] = array[i+1];
            array[i+1] = temp;    
        }       
     }   
  } 
    
}
//final functio

int main() {
  
int a[5] = {10,25,35,40,55};
int b[6] = {15,30,5,20,45,65}; 
//int c[11]={};  
int sizeb = 6;
int sizea = 5;
//int sizec = 11;

sort_array(a, 5);  
sort_array(b, 6);

cout<<"Este arreglo a ordenado\n";  
for(int i=0; i< sizea; i++){    
cout<<a[i] <<",";
  }   
cout<<"\n";  
cout<<"Este arreglo b ordenado\n";  
for(int i=0; i< sizeb; i++){    
cout<<b[i] <<"," <<"\t";
  }    

  return 0;
  
}