class Solution
{
public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        // Your code here
        vector<int> ans;
        if (root == NULL)
            return ans;
        map<int, vector<int>> mp;
        queue<pair<int, Node *>> q;
        q.push({0, root});
        while (!q.empty())
        {
            int hd = q.front().first;
            Node *n = q.front().second;
            q.pop();
            // if(mp.count(hd)==0) ans.push_back(n->data);
            mp[hd].push_back(n->data);
            if (n->left != NULL)
                q.push({hd - 1, n->left});
            if (n->right != NULL)
                q.push({hd + 1, n->right});
        }
        for (auto it : mp)
        {
            vector<int> v = it.second;
            ans.push_back(v[0]);
        }
        return ans;
    }
};