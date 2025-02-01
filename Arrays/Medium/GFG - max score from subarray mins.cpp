int pairWithMaxSum(vector<int> &nums)
{
    // Your code goes here
    int n = nums.size();
    int mx = 0;
    int sum = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        sum = nums[i] + nums[i + 1];
        mx = max(mx, sum);
        sum = 0;
    }
    return mx;
}