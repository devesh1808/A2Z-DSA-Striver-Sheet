vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    // Your code here
    // return vector with correct order of elements
    vector<int> v;
    int i = 0, j = 0;
    while (i < n and j < m)
    {
        if (arr1[i] == arr2[j])
        {
            if (v.size() == 0 || arr1[i] != v.back())
                v.push_back(arr1[i]);
            ++i, ++j;
        }
        else if (arr1[i] < arr2[j])
        {
            if (v.size() == 0 || arr1[i] != v.back())
                v.push_back(arr1[i]);
            ++i;
        }
        else
        {
            if (v.size() == 0 || arr2[j] != v.back())
                v.push_back(arr2[j]);
            ++j;
        }
    }
    while (i < n)
    {
        if (v.size() == 0 || arr1[i] != v.back())
            v.push_back(arr1[i]);
        ++i;
    }
    while (j < m)
    {
        if (v.size() == 0 || arr2[j] != v.back())
            v.push_back(arr2[j]);
        ++j;
    }
    return v;
}