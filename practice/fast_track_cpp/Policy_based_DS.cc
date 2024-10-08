/*
The g++ compiler also supports some data structures that are not part of the C++ standard library. Such structures are called policy-based data structures.
 These data structures are designed for high-performance, flexibility, semantic safety, and conformance to the corresponding containers in std.

To use these structures, the following lines must be added to the code:

#include <ext/pb_ds/assoc_container.hpp> 
using namespace __gnu_pbds;
*/

#include<bits/stdc++.h>
using namespace std;

// Program showing a policy-based data structure. 
#include <ext/pb_ds/assoc_container.hpp> // Common file 
#include <ext/pb_ds/tree_policy.hpp> 
#include <functional> // for less 
#include <iostream> 
using namespace __gnu_pbds; 
using namespace std; 
  
// a new data structure defined. Please refer below 
// GNU link : https://goo.gl/WVDL6g 
typedef tree<int, null_type, less<int>, rb_tree_tag, 
             tree_order_statistics_node_update> 
    ordered_set; 
  


// Driver code 
int main() 
{ 
    ordered_set X;
    X.insert(8);
    X.insert(2);
    X.insert(1);
    X.insert(16);
    X.insert(4);
    
    // value at 2nd index in sorted array
    cout<<*X.find_by_order(2)<<endl;
    // index of number 7 
    cout<<X.order_of_key(7)<<endl;
    return 0;
}
