#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int findDuplicate(vector<int> &nums)
{

    int slow = nums[0];
    int fast = nums[0];
    do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);
    fast = nums[0];
    while (fast != slow)
    {
        fast = nums[fast];
        slow = nums[slow];
    }
    return slow;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> nums;
    int n;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        nums.push_back(temp);
    }
    int number=findDuplicate(nums);
    cout<<number<<endl;
    return 0;
}