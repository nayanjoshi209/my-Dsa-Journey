#include <iostream>
#include <vector>
using namespace std;

int n;

void generateAllSubseq(vector<int>& currSubseq, vector<int>& nums, int index) {
    if(index == n) {
        for(int num : currSubseq)
            cout<<num<<" ";

        cout<<'\n';
        return;
    }

    // Take
    currSubseq.push_back(nums[index]);
    generateAllSubseq(currSubseq, nums, index + 1);
    currSubseq.pop_back();

    // Skip
    generateAllSubseq(currSubseq, nums, index + 1);
}

// Driver code
int main() {
    vector<int> nums = {1, 2, 3};
    n = nums.size();
    vector<int> currSubseq;

    generateAllSubseq(currSubseq, nums, 0);

    return 0;
}