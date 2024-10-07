/*
Bitset represents a fixed-size sequence of N bits and stores values either 0 or 1. Zero means value is false or bit is unset and one means value is true or bit is set. Bitset class emulates space efficient array of boolean values, where each element occupies only one bit.

As it emulates array, its index also starts from 0th position. Individual bit from bitset can be accessed using subscript operator.
 For instance to access first element of bitset test use test[0].

Bitset class provides constructors to create bitset from integer as well as from strings. The size of the bitset is fixed at compile time.

The main function defined for bitset class are operator [], count, size, set, reset and many more they are explained in below code:

int main(){

    // default constructor initializes with all bits 0 
    bitset<32> bset1; 
  
    // bset2 is initialized with bits of 20 
    bitset<32> bset2(20); 
  
    // bset3 is initialized with bits of specified binary string 
    bitset<32> bset3(string("1100")); 
  
    // cout prints exact bits representation of bitset 
    cout << bset1 << endl; // 00000000000000000000000000000000 
    cout << bset2 << endl; // 00000000000000000000000000010100 
    cout << bset3 << endl; // 00000000000000000000000000001100  
  
    // declaring set8 with capacity of 8 bits 
  
    bitset<8> set8; // 00000000 
  
    // setting first bit (or 6th index) 
    set8[1] = 1; // 00000010 
    set8[4] = set8[1]; // 00010010 
    cout << set8 << endl; // 00010010
  
    // count function returns number of set bits in bitset 
    int numberof1 = set8.count(); 
  
    // size function returns total number of bits in bitset 
    // so there difference will give us number of unset(0) bits in bitset 
    int numberof0 = set8.size() - numberof1; 
  
    cout << set8 << " has " << numberof1 << " ones and " << numberof0 << " zeros\n"; 
    // 00010010 has 2 ones and 6 zeros
  
    // test function return 1 if bit is set else returns 0 
    cout << "bool representation of " << set8 << " : "; 
    for (int i = 0; i < set8.size(); i++) 
        cout << set8.test(i) << " "; 
    cout << endl; 
    // bool representation of 00010010 : 0 1 0 0 1 0 0 0 
  
    // any function returns true, if atleast 1 bit is set 
    if (!set8.any()) 
        cout << "set8 has no bit set.\n"; // bset1 has no bit set. 
  
    // none function returns true, if none of the bit is set 
    if (!bset1.none()) 
        cout << "bset1 has some bit set\n"; 
  
    // set() sets all bits 
    cout << set8.set() << endl; // 11111111
  
    // set(pos, b) 
    cout << set8.set(4, 0) << endl; // makes set8[4] = 0
    // 11101111
  
    // set(pos) 
    cout << set8.set(4) << endl; // makes set8[4] = 1  i.e. default is 1
    // 11111111
  
    // reset function makes all bits 0 
    cout << set8.reset(2) << endl; // 11111011
    cout << set8.reset() << endl; // 00000000
  
    // flip function flips all bits i.e.  1 <-> 0 and  0 <-> 1 
    cout << set8.flip(2) << endl; // 00000100
    cout << set8.flip() << endl; // 11111011
  
    // Converting decimal number to binary by using bitset 
    int num = 100; 
    cout << "\nDecimal number: " << num << "  Binary equivalent: " << bitset<8>(num);
    // Decimal number: 100 Binary equivalent: 01100100 
  
    return 0; 
} 

For bitset all bitwise operator are overloaded that is they can be applied to bitset directly without any casting or conversion, main overloaded operator are &, |, ==, != and shifting operator <> which makes operation on bitset easy.
*/

#include<iostream>
#include<bitset>
using namespace std;

void print(bitset<32> x){
    cout<<x<<endl;
}

int main(){
    bitset<32> b1(1520);
    bitset<32> b2(1240);
    
    print(b1);
    print(b2);
    
    // Count the number of set bits in b1 and store it in count1
    int count1 = b1.count();
    cout<<count1<<endl;
    
    // Count the number of unset bits in b2 and store it in count2
    int count2 = b2.size() - b2.count();
    cout<<count2<<endl;
    
    // Flip all the odd bits in b1
    for(int i = 1; i <= 31; i+=2){
        b1.flip(i);
    } 
    
    print(b1);
    
    // print the XOR of both bitset
    cout<< (b1 ^ b2) <<endl;
    
    return 0;
}
