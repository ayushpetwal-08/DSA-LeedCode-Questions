class Solution {
public:
    int totalNumbers(vector<int>& digits) {

        vector<int> result;
        int totalCount = 0;
        //Count the frequency of each digit (0-9)
        vector<int> available_counts(10, 0);
        for (int d : digits) {
            available_counts[d]++;
        }
        
        //Iterate through all possible 3-digit even numbers
        for (int num = 100; num <= 998; num += 2) {
            int d1 = num / 100;         // Hundreds place
            int d2 = (num / 10) % 10;   // Tens place
            int d3 = num % 10;          // Ones place
            
            // Track the count of digits needed for the current number
            vector<int> required_counts(10, 0);
            required_counts[d1]++;
            required_counts[d2]++;
            required_counts[d3]++;
            
            //Check if we have enough digits available
            if (available_counts[d1] >= required_counts[d1] &&
                available_counts[d2] >= required_counts[d2] &&
                available_counts[d3] >= required_counts[d3]) {
                totalCount++;
                result.push_back(num);
            }
        }
        
        return totalCount;
    }
};