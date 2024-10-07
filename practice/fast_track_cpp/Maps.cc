/*
Try the following example in the editor below.

There are some boxes and each having a unique id. You are given Q queries of three types to be performed on the boxes.

    1 X Y : Add the Y balls to the box whose id is X.
    2 X : Remove all balls from the box whose id is X.
    3 X : Print the number of balls in the box id X.

Input Format

    The first line of the input contains Q where Q is the number of queries.
    The next Q lines contain 1 query each. The first integer, type of each query is the type of the query.
        If query is of type 1, it consists of two integer X and Y.
        If query is of type 2 or 3, it consists of a single integer X where X is the id of box.

Constraints

1 <= Q <= 105 
1 <= Y <= 104 
1 <= X <= 109

Sample Input

7
1 3 5
1 2 1
2 4
3 3
2 3
3 3
3 2

Sample Output

5
0
1
*/
#include<iostream>
#include<map>
using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int noQ;
    cout<<"Enter number of Quary: "; cin>>noQ;
    cout<<"Enter vlaues according to below choice: \n";
    cout<<"1 X Y : Add the Y balls to the box whose id is X.\n2 X : Remove all balls from the box whose id is X.\n3 X : Print the number of balls in the box id X.\n";
    int op, x, y=0;
    map<int,int> storeRoom;
    for(int i=0; i<noQ; i++)
    {
        cin>>op>>x;
        if(op == 1)
        {
            cin>>y;
            storeRoom[x] = storeRoom[x]+y;
            
        }
        else if(op == 2)
        {
            storeRoom[x] = 0;
        }
        else if(op == 3)
        {
            if(storeRoom.find(x) == storeRoom.end())
                cout<<"This ID has no locker i nour bank.\n";
            cout<<storeRoom[x]<<endl;
        }
        else
            cout<<"Wrong Input!\n";
    }
    return 0;
}
