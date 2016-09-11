#include <unordered_map>
#include <vector>
#include <iostream>

using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    unordered_map<int, int> record;
        
    int size = nums.size();
    for (int i = 0; i < size; i++) {
	auto found = record.find(nums[i]);
	if (found == record.end()) {
	    record.insert({target - nums[i], i});
	} else {
	    result.push_back(found->second);
	    result.push_back(i);result.push_back(1);
	    break;
	}
    }
        
    return result;
}

int main(void)
{
    vector<int> input = {1, 2, 3, 4};
    cout << twoSum(input, 3)[0];
    return 0;
}
