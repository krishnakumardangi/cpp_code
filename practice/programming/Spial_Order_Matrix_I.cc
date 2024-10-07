/*
Problem Description
 
 
Given a matrix of M * N elements (M rows, N columns), return all elements of the matrix in spiral order.


Problem Constraints
1 <= M, N <= 1000


Input Format
The first argument is a matrix A.


Output Format
Return an array of integers representing all elements of the matrix in spiral order.


Example Input

A = 
    [
        [ 1, 2, 3 ],
        [ 4, 5, 6 ],
        [ 7, 8, 9 ]
    ]



Example Output

[1, 2, 3, 6, 9, 8, 7, 4, 5]
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralOrder(const vector<vector<int>>& matrix) {
    vector<int> result;
    if (matrix.empty()) return result;

    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        // Traverse top row
        for (int i = left; i <= right; ++i)
            result.push_back(matrix[top][i]);
        ++top;

        // Traverse rightmost column
        for (int i = top; i <= bottom; ++i)
            result.push_back(matrix[i][right]);
        --right;

        // Traverse bottom row if there is any
        if (top <= bottom) {
            for (int i = right; i >= left; --i)
                result.push_back(matrix[bottom][i]);
            --bottom;
        }

        // Traverse leftmost column if there is any
        if (left <= right) {
            for (int i = bottom; i >= top; --i)
                result.push_back(matrix[i][left]);
            ++left;
        }
    }

    return result;
}

// Example usage
int main() {
    vector<vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    vector<int> result = spiralOrder(A);
    for (int num : result) {
        cout << num << " ";
    }
    cout<<"\n";
    // Output: 1 2 3 6 9 8 7 4 5
    return 0;
}
