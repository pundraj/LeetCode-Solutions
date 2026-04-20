class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
        int i=0;
        int j=nums.size()-1;
        while(i < j){
            if(nums[i] +  nums[j] == tar){
                return {i+1,j+1};
            }
            if(nums[i] +nums[j] > tar){
                j--;
            }
            if(nums[i] + nums[j] < tar){
                i++;
            }

        }
        return {};
        
    }
};