class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int* first = nullptr;
        int* second = nullptr;
        int* third = nullptr;
        
        for (int& num : nums) {
            if ((first && num == *first) || (second && num == *second) || (third && num == *third)) {
                continue;
            }

            if (!first || num > *first) {
                third = second;
                second = first;
                first = &num;
            } else if (!second || num > *second) {
                third = second;
                second = &num;
            } else if (!third || num > *third) {
                third = &num;
            }
        }
        
        return third ? *third : *first;
    }
};
