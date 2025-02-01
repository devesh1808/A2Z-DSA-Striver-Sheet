vector<int> rearrangeArray(vector<int> &nums)
{
    int sz = nums.size();
    vector<int> v(sz);
    int p = 0, n = 1;
    for (int ele : nums)
    {
        if (ele >= 0)
        {
            v[p] = ele;
            p += 2;
        }
        else
        {
            v[n] = ele;
            n += 2;
        }
    }
    return v;
}