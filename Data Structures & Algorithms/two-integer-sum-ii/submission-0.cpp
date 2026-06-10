class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;
        vector<int>result(2, 0);
        while(i < j){
            int sum = numbers[i] + numbers[j];
            if(target > sum){
                i++;
            }
            else if(target < sum){
                j--;
            }
            else{
                result[0] = i + 1;
                result[1] = j + 1;
                i++;
                j--;
            }
        }
        return result;
    }
};
