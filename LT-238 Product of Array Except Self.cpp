//
// Created by Ke Ye on 2019-06-21.
//

#include <iostream>
#include <vector>

using namespace std;


class Solution{
public:
    vector<int> productExceptSelf(vector<int>& nums){
        int size = nums.size();
        vector<int> res(size, 1);
        for(int i = 1; i < size; i++){
            res[i] = res[i - 1] * nums[i - 1];
        }
        int r = nums[size - 1];
        for(int i = size - 2; i >= 0; i--){
            res[i] *= r;
            r *= nums[i];
        }
        return res;
    }
};


int main() {

}