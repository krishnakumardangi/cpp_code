/*
Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to the given number.
If there is more than one solution possible, return the lexicographically smaller solution i.e.

If [a, b] is one solution with a <= b,
and [c,d] is another solution with c <= d, then

[a, b] < [c, d] 
If a < c OR ( a == c AND b < d ).

NOTE: A solution will always exist. read Goldbach's conjecture


Problem Constraints
1 <= A <= 2 * 107


Input Format
The first argument is an integer A.


Output Format
Return an array of integers.


Example Input
4


Example Output
[2, 2]


Example Explanation
2 + 2 equals 4, which is the lexicographically smaller solution
*/


bool check(int n)
{
    if(n<=1)
        return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return false;
    return true;
}

vector<int> Solution::primesum(int A) 
{
    for(int i=0;i<A;i++)
    {
        if(check(i) && check(A-i))
            return{i,A-i};
    }
}

