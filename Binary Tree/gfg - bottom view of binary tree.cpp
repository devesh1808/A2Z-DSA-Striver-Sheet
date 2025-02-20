class Solution
{
public:
    vector<int> bottomView(Node *root)
    {
        // Your Code Here
        vector<int> ans;
        if (root == NULL)
            return ans;
        queue<pair<int, Node *>> q;
        map<int, vector<int>> mp;
        q.push({0, root});
        while (!q.empty())
        {
            int hd = q.front().first;
            Node *n = q.front().second;
            q.pop();
            mp[hd].push_back(n->data);
            if (n->left != NULL)
                q.push({hd - 1, n->left});
            if (n->right != NULL)
                q.push({hd + 1, n->right});
        }
        for (auto it : mp)
        {
            vector<int> v = it.second;
            ans.push_back(v[v.size() - 1]);
        }
        return ans;
    }
};