#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int k = m+n-1;
        int i = m-1;
        int j=n-1;

        while(i>=0 and j>=0){
            if(nums1[i]<nums2[j]){
                nums1[k--] = nums2[j--];
               
            }
            else{
                nums1[k--] = nums1[i--];
               
            }
        }
        while(j>=0){
            nums1[k--] = nums2[j--];
        }
    }
};


int main() {
    // Test case 1
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    Solution sol;
    sol.merge(nums1, m, nums2, n);

    cout << "Merged Array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

}
