/* File:  simple_File_IO.cpp
This C++ program illustrates the use of input and output
files in conjunction with arrays.

The program reads five numbers from an input file and 
stores them in reverse order in an array of type long.
That is to say, it stores the first value read in the 
element at index 4 and stores the last value read in the
element at index 0.

Then it displays the five values in forward order relative
to the beginning of the array.

Then it writes the contents of the array into an output
file in forward order.

Then it computes and displays the average of the three
middle values in the array.

Finally, it closes the input file and the output file.

SAMPLE INPUT AND OUTPUT VALUES:

For a file containing the following input values:

-100 -50 0 49 99

The output file contains the following values:

99 49 0 -50 -100

and the screen output while the program is running is:

Array contents:
99 49 0 -50 -100
Avg 3 middle values = -0.333333

**********************************************************/

#include <iostream>
#include <fstream>//required for file operations

using namespace std;

class File_IO{ 
  public:
  static void classMain(){
    File_IO* ptrToObject = new File_IO();
    ptrToObject -> doSomething();
  }//End classMain function
  //-----------------------------------------------------//

  //An instance function of the File_IO class
  void doSomething(){
    ifstream dataFile;//Input file stream
    ofstream outFile;//Output file stream
    dataFile.open("File_IOin.txt");//Input file name
    outFile.open("File_IOout.txt");//Output file name

    const int size = 5;
    long values[size];

    //Populate the array in reverse order by reading data
    // values from an input file..
    int count = size - 1;
    while(count >= 0){
      dataFile >> values[count];
      count = count - 1;
    }//end while loop

    //Display contents of the array in forward order.
    cout << "Array contents:" << endl;
    count = 0;
    while(count < size){
      cout << values[count] << " ";
      count = count + 1;
    }//end while loop
    cout << endl;

    //Write array data into the output file in forward 
    // order.
    count = 0;
    while(count < size){
      outFile << values[count] << " ";
      count = count + 1;
    }//end while loop
    outFile << endl;

    //Compute and display the average of the three middle 
    // values in the array.
    count = 1;
    double sum = 0;
    while(count < size-1){
      sum = sum + values[count];
      count = count + 1;
    }//end while loop
    cout << "Avg 3 middle values = " << sum/(size - 2) 
                                                   << endl;

    //Close both files.
    dataFile.close();
    outFile.close();
  }//end doSomething function
  //-----------------------------------------------------//

};//End File_IO class
//-------------------------------------------------------//

int main(){
  File_IO::classMain();
  return 0;
}//end main
