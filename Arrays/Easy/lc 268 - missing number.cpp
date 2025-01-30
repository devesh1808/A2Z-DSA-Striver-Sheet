int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int sumOfIndexes = 0, sumOfElements = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfIndexes += i;
        sumOfElements += nums[i];
    }
    return (sumOfIndexes + n) - sumOfElements;
}