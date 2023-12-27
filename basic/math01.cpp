/*File:  math01.cpp

This C++ program illustrates the use of 
prewritten functions.

This program displays the following text on the 
screen:

3.87298
4.47214
5
5.47723

************************************************/

#include <iostream>
#include <math.h> //Necessary for sqrt() function
using namespace std;

int main(){//Global main function.
  cout << sqrt(15.0) << endl;
  cout << sqrt(20.0) << endl;
  cout << sqrt(25.0) << endl;
  cout << sqrt(30.0) << endl;
  return 0;
}//end main function
