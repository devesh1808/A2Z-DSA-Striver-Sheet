int singleNumber(vector<int> &nums)
{
    int xr = 0;
    for (int ele : nums)
    {
        xr ^= ele;
    }
    return xr;
}