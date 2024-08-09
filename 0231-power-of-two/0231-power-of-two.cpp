class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        int ans;
        int x =0;
        while( x <=30){
            ans = pow(2,x);
            x++;
            if(ans==n){
                return true;
            }
            
        }
        return false;
    }
};