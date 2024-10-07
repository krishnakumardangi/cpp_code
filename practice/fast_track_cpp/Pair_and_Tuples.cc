/*
There can be some instances where you need to return multiple values (may be of different data types) while solving a problem.
One method to do the same is by using pointers or structures, already discussed in previous problems.
There is another interesting method to do the same without using the above methods, using tuples (for returning multiple values ) and pair (for two values).

We can declare the function with return type as pair or tuple (whichever required) and can pack the values to be returned and return the packed set of values. The returned values can be unpacked in the calling function.
*/
#include <iostream>
#include <vector>
#include<tuple>
using namespace std;


pair<int, int> findMaxMin(vector<int> &A){
    // First value of pair will be Maximum of array A and second will be Minimum of array A
    int Max = A[0];
    int Min = A[0];
    for (int i = 1; i < A.size(); i++){
        if (Max < A[i]){
            Max = A[i];
        }
        if (Min > A[i]){
            Min = A[i];
        }
    }
   
    pair<int, int> ans(Max, Min);
    return ans; 
}

tuple<int, int, int, string> compute(vector<int> &A){
    // First value of tuple will be sum of array A
    // Second value of tuple will be sum of even values in array A 
    // Third value of tuple will be sum of odd values in array A
     int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;

    for (int i = 0; i < A.size(); i++){
        sum1 += A[i];
    }
    for (int i = 0; i < A.size(); i++){
        if (A[i] % 2 == 0){
            sum2 += A[i];
        }
    }
    for (int i = 0; i < A.size(); i++){
        if (A[i] % 2 != 0){
            sum3 += A[i];
        }
    }
    
    //string coder = "Krishna";
   
    tuple<int, int, int, string> ans(sum1, sum2, sum3, "Krishna");
    return ans; 
}


int main()  {
    int n;
    cout<<"Enter size of vector: "; cin>>n;
    
    vector<int> A(n, 0);
    cout<<"Enter elements of vector with one space.\n";
    for(int i = 0; i < n; i++){
        cin>>A[i];
    }
    
    pair<int, int> max_min = findMaxMin(A);
    cout<<"Maximum Value: "<<max_min.first<<" and  Mminimum Value: "<<max_min.second<<endl;
    
    tuple<int, int, int, string> tuple_values = compute(A);
    cout<< get<0>(tuple_values) << " " << get<1>(tuple_values) << " " << get<2>(tuple_values) << " and Programmer name is : "<< get<3>(tuple_values) << endl;
    
    return 0;
}
