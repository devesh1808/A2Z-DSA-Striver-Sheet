int print2largest(vector<int> &arr)
{
    // Code Here
    int n = arr.size();
    int l = arr[0], s = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > l)
        {
            s = l;
            l = arr[i];
        }
        else if (arr[i] > s && arr[i] != l)
            s = arr[i];
    }
    return s == 0 ? -1 : s;
}