#include<iostream>
using namespace std;
class Array
{
  
  int *dataPtr;
  int noOfElements;
  float avg;
public: 
  int getSize(){
    return noOfElements;
  }
  void setSize(int size){
      noOfElements = size;
  }
  float getAvg(){
      return avg;
  }
  void populate(int size, int max){
    float sum = 0;
    dataPtr = new int[noOfElements];
    for(int i = 0; i < noOfElements; i++){
        // cout<<"give input for "<<i<<" col: ";
        dataPtr[i] = rand() % max;
        sum = sum + dataPtr[i];

    }
    avg = sum/noOfElements;
    
  }
  void showArray(){
        for(int i = 0; i < noOfElements; i++){
            cout<<dataPtr[i]<<" ";
        }
        cout<<"avg: "<<avg<<endl;
    }

    // define necessary getter and setter method(s) [5]
    // define other necessary method(s) to support the main() [10]
    //NO friend is ALLOWED
};

class ArrayOfArrays
{
  
  Array *ptrToArrays;
  int noOfArrays;

public:
  ArrayOfArrays& setArrayOfArrays (int n, int max){
    noOfArrays = n;
    ptrToArrays = new Array[n];
    for(int i = 0; i < n; i++){
      ptrToArrays[i].setSize(rand()%10);
    //   cout<<"give input for row "<<i<<endl;
      ptrToArrays[i].populate(ptrToArrays[i].getSize(), max);
    }
    return *this;
  }
  void showArrayOfArrays(){
      float sumOfAverages = 0;
      for(int i = 0; i < noOfArrays; i++){
        ptrToArrays[i].showArray();
        sumOfAverages = sumOfAverages + ptrToArrays[i].getAvg();
      }
    }
    float getAvgOfAvgs(){
        float sumOfAverages = 0;
        for(int i = 0; i < noOfArrays; i++){
            sumOfAverages = sumOfAverages + ptrToArrays[i].getAvg();
        }
        return sumOfAverages/noOfArrays;
    }
  

// define method:setArrayOfArrays [10]
// set random integers and calculate avg to the fields for
// each of ptrToArrays[i] [see RUN]
// define method: showArrayOfArrays [10]
// show elements and avg as per the RUN
// define method: getAvgOfAvgs [5]
// display the average of array-averages as per the RUN
//NO friend is ALLOWED
};


int main ()
{
  
  ArrayOfArrays obj;
  
  int n = 10, max = 100;
  //int n = rand () % 10;
  
      // n = no of Array to be pointed by ptrToArrays in obj, i.e. noOfArrays
      // max is the upper limit of random values for Array elements in dataPtr
    obj.setArrayOfArrays (n, max).showArrayOfArrays ();
        
      // Explanation of setArrayOfArrays(n, max):
      // set-random size of each Array instances inside obj,
      // i.e. noOfElements of obj.ptrToArrays[i], then populate them
      // with random integers up to max. [see sample RUN]
      // Beware of required multi-level memory allocation to the pointers
      // Explanation of showArrayOfArrays():
      // display the Array instances inside obj as shown in sample RUN
      cout << "Average of averages of ALL Arrays is:"<<obj.getAvgOfAvgs ();
        
      // display the average of averages of the arrays as shown in sample RUN
    return 0;

}				//end main
