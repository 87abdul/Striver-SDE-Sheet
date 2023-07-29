class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int cur_Sum = nums[0], sum_So_far = nums[0];
        
        for(int i = 1 ; i < nums.size() ; i++){
            
            cur_Sum = max(nums[i] , cur_Sum + nums[i]);
            
            sum_So_far = max(sum_So_far , cur_Sum);
        }
        
        return sum_So_far;
    }
};