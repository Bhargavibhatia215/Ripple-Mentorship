#include<bits/stdc++.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sum,a;
        for(int k=0;k<nums.size();k++){
            a.push_back(nums[k]);
        }
        int i=0,j=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(i<j){
            if((nums[i]+nums[j])==target){
                break;
            }
            else if((nums[i]+nums[j])>target){
                j--;
            }
            else{
                i++;
            }
        }
        for(int k=0;k<a.size();k++){
            if(a[k]==nums[i]){
                sum.push_back(k);
            }
            else if(a[k]==nums[j]){
                sum.push_back(k);
            }
        }
        return sum;
        
    }
};
