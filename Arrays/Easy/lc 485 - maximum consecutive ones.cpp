int findMaxConsecutiveOnes(vector<int> &nums)
{
    int mx = 0, cnt = 0;
    for (int ele : nums)
    {
        if (ele == 1)
            cnt++;
        else
            cnt = 0;
        mx = max(mx, cnt);
    }
    return mx;
}