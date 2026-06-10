
class Solution {
public:
    int trap(vector<int>& height) {
        // // caculating right max
        int n = height.size();
        // vector<int>right_max(n, 0);
        // int right_max_value = height[n - 1];
        // for(int i = n - 1; i >= 0; i --){
        //     if(height[i] >= right_max_value){
        //         right_max_value = height[i];
        //     }
        //     right_max[i] = right_max_value;
        // }
        // vector<int>left_max(n, 0);
        // int left_max_value = height[0];
        // for(int i = 0; i < n; i++){
        //     if(height[i] >= left_max_value){
        //         left_max_value = height[i];
        //     }
        //     left_max[i] = left_max_value;
        // }
        // int answer = 0;
        // for(int i = 0; i < n; i++){
        //     if((min(right_max[i], left_max[i]) - height[i]) >= 0){
        //             answer += min(right_max[i], left_max[i]) - height[i];
        //     }
        // }
        // return answer;

        // O(1) space -> two pointer approach

        int l = 0, r = n - 1;
        int l_max = 0, r_max = 0, ans = 0;

        while(l < r){
            l_max = max(l_max, height[l]);
            r_max = max(r_max, height[r]);

            if(l_max < r_max){
                ans += l_max - height[l];
                l++;
            }
            else{
                ans += r_max - height[r];
                r--;
            }
        }
        return ans;
    }
};

