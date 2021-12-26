

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
