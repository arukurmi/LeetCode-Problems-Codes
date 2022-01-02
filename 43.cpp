// Given two non-negative integers num1 and num2 represented as strings, return the product of num1 and num2, also represented as a string.
// Note: You must not use any built-in BigInteger library or convert the inputs to integer directly.


class Solution{
public:
    string multiply(string s, string t) {
        
        int n = s.length();
        int m = t.length();
        
        if(n==0 || m==0 || s=="0" || t=="0"){
            return "0";
        }
        if(s=="1"){
            return t;
        }
        if(t=="1"){
            return s;
        }
        
        vector<int> res(n+m, 0);
        
        for(int i=n-1; i>=0; i--){
            for(int j=m-1; j>=0; j--){
                int prod = (s[i]-'0') * (t[j]-'0');
                
                prod += res[i+j+1];
                
                res[i+j+1] = prod%10;
                res[i+j] += prod/10;
            }            
        }
        
        string ans;
        
        for(int i=0; i<n+m; i++){
            if(res[i] == 0 && ans.length() == 0){
                continue;
            }
            ans.push_back(res[i] + '0');
        }
        
        return ans;
    }
};