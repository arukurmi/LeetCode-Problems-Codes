// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

class Solution {
public:
    int searchInsert(vector<int>& v, int t){
        
        int n = v.size();
        int s = 0, e = n-1;
        int mid;
        
        while(s<=e){
            
            mid = s+(e-s)/2;
            if(v[mid] == t){
                return mid;
            }
            
            if(v[mid] < t) s = mid+1;
            
            else e=mid-1;
            
        }
        
        return s;
    }
};