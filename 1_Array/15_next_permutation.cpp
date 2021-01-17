class Solution {
public:

    void nextPermutation(vector<int>& nums) {
       int flag=0;
        int p;
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                flag=1;
                p=i;
                break;
            }
        }
        if(flag==0)
            reverse(nums.begin(),nums.end());
        else
        {
            for(int i=nums.size()-1;i>p;i--)
            {
                if(nums[i]>nums[p])
                {
                    swap(nums[i],nums[p]);
                    break;
                }
            }
            reverse(nums.begin()+p+1,nums.end());
        }
    }
};