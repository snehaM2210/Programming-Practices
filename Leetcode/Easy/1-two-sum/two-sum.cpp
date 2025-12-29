class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*
        for(int i=0;i<nums.size(); i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {};*/

        /* //Works only on sorted arrays
        int left=0;
        int right=nums.size()-1;

        while(left<right){
            int currentSum = nums[left] + nums[right];
            if(currentSum == target){
                return {left,right};
            }
            if(currentSum < target){ 
                left++;
            }
            else{
                right--;
            }
        }
        return {};*/
        unordered_map <int, int> m;
        // a+b = target, then a = target-b or b = target-a
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];

            // If the complement is in the map, we found the pair!
            if (m.find(complement) != m.end()) {
                return {m[complement], i};
            }

            // Otherwise, save this number and its index for later
            m[nums[i]] = i;
        }

        return {};
    }
};