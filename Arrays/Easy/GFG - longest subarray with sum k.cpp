int lenOfLongSubarr(int nums[], int n, int k)
{
    // Complete the function
    unordered_map<int, int> mp;
    mp[0] = -1;
    int sum = 0, mx = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += nums[i];
        if (mp.find(sum - k) != mp.end())
        {
            mx = max(mx, i - mp[sum - k]);
        }
        if (mp.find(sum) == mp.end())
            mp[sum] = i;
    }
    return mx;
}
