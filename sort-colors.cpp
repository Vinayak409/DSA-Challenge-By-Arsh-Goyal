class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start = 0, middle = 0, end = nums.size()-1;
        while(middle <= end){
            switch(nums[middle]){
                case 0:
                    swap(nums[middle], nums[start]);
                    middle++, start++;
                    break;
                case 1:
                    middle++;
                    break;
                case 2:
                    swap(nums[middle], nums[end]);
                    end--;
                    break;
            }
        }
    }
};