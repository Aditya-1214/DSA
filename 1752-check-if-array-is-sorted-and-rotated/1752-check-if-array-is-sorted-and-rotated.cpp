class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
     for (int i = 0; i < n; i++){

            // compare current element with next element
            if(nums[i] > nums[(i+1)%n]){
                count++;
            }
        }

        // More than one break means not sorted rotated
        if(count > 1)
            return false;

        return true;
    }
};