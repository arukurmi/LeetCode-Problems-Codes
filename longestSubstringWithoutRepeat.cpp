// Given a string, 
// find the length of the longest substring without repeating characters.
// Example:
// The longest substring without repeating letters for "abcabcbb" is "abc", which the length is 3.
// For "bbbbb" the longest substring is "b", with the length of 1.

int Solution::lengthOfLongestSubstring(string s){

    int ans = INT_MIN;
    int len = s.length();
    map<char, int> mp;
    int temp = 0;
    int l = 0, r = 0, winlen = 0;
    
    while(r<len){
        char temp = s[r];
        if(mp.find(temp) != mp.end()){
            while(mp[temp]){
                mp[s[l]]--;
                l++;
            }
        }
        
        mp[temp]++;
        winlen = r-l+1;
        ans = max(winlen, ans);
        r++;
    }
    return ans;
}