#include<iostream>
#include<cmath>

using namespace std;

void compute(int& A, int& B, int& C, int *k)
{
    A = A*A*A;
    B = pow(B, 3);
    C = C*C*C;
    *k = 18;
}


int main()
{
    int A, B, C;
    int *q, *p, *r;
    cin>>A>>B>>C;
    p = &A;
    q = &B;
    r = &C;
    compute(A, B, C, p);
    cout<<"A = "<<A<<"\nB = "<<B<<"\nC = "<<C<<"\n";

    return 0;
}
