class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int ind1, ind2;
        // we have to find ind1 and ind2

        // Finding index1 

        for( ind1 = n-2 ; ind1 >=0 ;ind1-- ){

            if(nums[ind1] < nums[ind1+1])
                break; // we got index1
          }

          if(ind1 < 0){
              reverse(nums.begin(), nums.end());
          }

          else{
              // Finding index2

              for(ind2 = n-1 ; ind2 > ind1 ; ind2-- ){
                  if(nums[ind2] > nums[ind1])
                  break; // got index2 as well
              }
              swap(nums[ind1], nums[ind2]);
          reverse(nums.begin() + ind1 + 1, nums.end());
          }  
    }
};