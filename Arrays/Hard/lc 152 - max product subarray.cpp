int maxProduct(vector<int> &nums)
{
    int n = nums.size();
    int mxLeft = INT_MIN, mxRight = INT_MIN;
    int prod = 1;
    for (int i = 0; i < n; i++)
    {
        prod *= nums[i];
        mxLeft = max(mxLeft, prod);
        if (prod == 0)
            prod = 1;
    }
    prod = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        prod *= nums[i];
        mxRight = max(mxRight, prod);
        if (prod == 0)
            prod = 1;
    }
    return max(mxLeft, mxRight);
}