class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for (int i = 0; i < nums.size(); i++)
        {
            if( i > 0){
                if(nums[i] == nums[i - 1]) continue;
            }
            int target = -nums[i];
            int m = i + 1;
            int n = nums.size() - 1;
            while (m < n)
            {
                    int sum = nums[m] + nums[n];
                    if (target > sum)
                    {
                        m++;
                    }
                    else if (target < sum)
                    {
                        /* code */
                        n--;
                    }
                    else
                    {
                        result.push_back({nums[i], nums[m], nums[n]});
                        m++;
                        n--;

                        while(m < n && nums[m] == nums[m - 1]) m++;
                        while(m < n && nums[n] == nums[n + 1]) n--;
                    }
                
            }
        }
        return result;
    }
};