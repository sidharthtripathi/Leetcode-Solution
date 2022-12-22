class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int king = nums[0];
        int count = 0;
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i] == king)
            count++;
            else
            count--;
            if(count == 0){
            king = nums[i];
            count++;
            }
        }
        return king;
    }
};