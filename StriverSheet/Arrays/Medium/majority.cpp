#include <iostream>
#include <vector>

using namespace std;

int majority(vector<int> &nums)
{
    int candidate = 0;
    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
        }
        if (nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return candidate;
}

int main(){
    vector<int> nums = {2,3,2,5,2,5,2};
    cout<<"Majority Element:"<< majority(nums);
}