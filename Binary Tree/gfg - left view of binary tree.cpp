vector<int> leftView(Node *root)
{
    // Your code here
    vector<int> ans;
    if (root == NULL)
        return ans;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            Node *n = q.front();
            q.pop();
            if (i == 0)
                ans.push_back(n->data);
            if (n->left != NULL)
                q.push(n->left);
            if (n->right != NULL)
                q.push(n->right);
        }
    }
    return ans;
}