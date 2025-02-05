vector<int> leaders(int a[], int n)
{
    vector<int> ans;
    int flag = a[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] >= flag)
        {
            flag = a[i];
            ans.push_back(a[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}