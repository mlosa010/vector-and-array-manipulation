/*
Author: Manuel Losada
created: 6/20/2017
the following project shows the manipulation and printing of arrays, vectors and lists though functions
passing arrays to functions: https://www.youtube.com/watch?v=mnaD9bH6y6A
manipulating vectors and their values: https://www.youtube.com/watch?v=m8QzXKLP210
*/

#include <iostream>
#include <vector>
using namespace std;
/*notice how vectors are declared, keyword data type, vecroe name*/

vector<int> numbers(10);


int array[10]={0,1,2,3,4,5,6,7,8,9};

void augmentArray(int numbers[], int length);

int printArray(int numbers[], int length);

int printVector(vector<int> numbers);

//in the following functions i am making changes to the value located at the address
//so i must now pass by reference
void increaseVector(vector<int> &vector);

void copyArrayIntoVector(vector<int> &vector, int array[], int lenth);

int main() {
  copyArrayIntoVector(numbers,array,10);
  cout<<"vectors before augmentation\n"<<endl;
  printVector(numbers);
  increaseVector(numbers);
  cout<<"\nvectors after augmentation"<<endl;
  printVector(numbers);




  cout<<"\narray before addition"<<endl;
  printArray(array,10);
  cout<<"\narray after addition"<<endl;
  augmentArray(array,10);
  printArray(array,10);





  return 0;
}

void copyArrayIntoVector(vector<int> &vector, int array[], int lenth){
    for (int i = 0; i < lenth; i++) {
      vector[i]=array[i];
    }
}
void increaseVector(vector<int> &vector){
  for(int count=0; count < 10; count++){
    vector[count]+=3;
  }
}
int printVector(vector<int> vector){
  for(int counter=0; counter<10;counter++){
    cout<<vector.at(counter)<<" ";
  }
}

int printArray(int numbers[], int length){
  for(int counter=0; counter < length; counter++){
    cout<< numbers[counter]<<" ";
  }
}


void augmentArray(int numbers[], int length){
  for(int counter=0; counter < length; counter++){
    numbers[counter]=numbers[counter]+2;
  }
  }
