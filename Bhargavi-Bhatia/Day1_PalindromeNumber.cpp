class Solution {
public:
    bool isPalindrome(int x) {
        long long int k=0,l=x;
        bool flag=true;
        if(x<0){
            return false;
        }
        else{
            while(l!=0){
                k=k*10+l%10;
                l = l/10;
            }
            if(k==x){
                 return true;
            }   
        }
        return false;
    }
};
