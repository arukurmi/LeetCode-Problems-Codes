int Solution::lis(const vector<int> &A){
    int n = A.size();
    vector<int> incc(n, 1), decc(n, 1);

    for(int i=1; i<n; ++i){
        for(int j=0; j<i; ++j){
            if(A[j] < A[i]){
                incc[i] = max(incc[i], incc[j]+1);
            }
        }
    }

    int maxx = -1;
    for(int i=0; i<n; ++i){
        maxx = max(maxx, incc[i]);
    }

    return maxx;
}