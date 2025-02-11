long long int merge(long long int arr[], long long int l, long long int m, long long int r)
{
    // Your code here
    long long int inv_count = 0;
    long long int temp[r + 1];
    long long int i = l, k = 0, j = m + 1;
    while (i <= m && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            inv_count += (m + 1) - i;
        }
    }
    while (i <= m)
        temp[k++] = arr[i++];
    while (j <= r)
        temp[k++] = arr[j++];
    --k;
    while (k >= 0)
    {
        arr[l + k] = temp[k];
        --k;
    }
    return inv_count;
}
long long int mS(long long int arr[], long long int l, long long int r)
{
    // code here
    long long int cnt = 0;
    if (l >= r)
        return cnt;
    long long int mid = l + (r - l) / 2;
    cnt += mS(arr, l, mid);
    cnt += mS(arr, mid + 1, r);
    cnt += merge(arr, l, mid, r);
    return cnt;
}
long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    long long int inv_cnt = 0;
    inv_cnt = mS(arr, 0, N - 1);
    return inv_cnt;
}