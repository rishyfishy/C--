#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    for (unsigned i = 0; i < nums.size()-1; i++)
    {
        for (unsigned j = (i+1); j <= nums.size(); j++)
        {
            if ((nums[i] + nums[j]) == target)
            {
                return vector<int>{static_cast<int>(i), static_cast<int>(j)};
            }
        }
    }
    return vector<int>{-1};
}

void printVec(vector<int> b)
{
    cout << "|";
    for (unsigned i = 0; i < b.size(); i++)
    {
        cout << b[i] << "|";
    }
}
int main()
{
    vector<int> ooga = {2,5,5,11};
    int target = 10;
    printVec(twoSum(ooga,target));
}