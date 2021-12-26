// Given two sorted integer arrays A and B, merge B into A as one sorted array.
// Note: You have to modify the array A to contain the merge of A and B. Do not output anything in your code.
// TIP: C users, please malloc the result into a new array and return the result.
// If the number of elements initialized in A and B are m and n respectively, the resulting size of array A after your code is executed should be m + n

// Example :
// Input : 
//          A : [1 5 8]
//          B : [6 9]

// Modified A : [1 5 6 8 9]

void Solution::merge(vector<int> &a, vector<int> &b) {

    int n = a.size();
    int m = b.size();
    int i = n-1;
    int j = 0;

    while(i>=0 && j<m){
        if(b[j] < a[i]){
            swap(b[j], a[i]);
        }
        i--;
        j++;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for(int k=0; k<b.size(); k++){
        a.push_back(b[k]);
    }
    
}
