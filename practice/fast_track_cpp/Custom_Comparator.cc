void sortArray(vector<pair<int, int>> &A){
    int tempA, tempB;
    for(int i=0; i<A.size(); i++)
    {
        for(int j=0; j<A.size()-i-1; j++)
        {
            if((A[j].first + A[j].second)>(A[j+1].first + A[j+1].second))
            {
                tempA = A[j].first;
                tempB = A[j].second;
                A[j].first = A[j+1].first;
                A[j].second = A[j+1].first;
                A[j+1].first = tempA;
                A[j+1].first = tempB;
            }
        }
    }
}
