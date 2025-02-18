// recursive solution

// class Solution
// {
// public:
//     void func(TreeNode *root, vector<int> &ans)
//     {
//         if (root == NULL)
//             return;
//         func(root->left, ans);
//         func(root->right, ans);
//         ans.push_back(root->val);
//     }
//     vector<int> postorderTraversal(TreeNode *root)
//     {
//         vector<int> ans;
//         func(root, ans);
//         return ans;
//     }
// };




// itetative solution

class Solution
{
public:
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> v;
        if (root == NULL)
            return v;
        stack<TreeNode *> st;
        TreeNode *c = root;
        while (c != NULL || !st.empty())
        {
            while (c != NULL)
            {
                v.push_back(c->val);
                st.push(c);
                c = c->right;
            }
            c = st.top();
            st.pop();
            c = c->left;
        }
        reverse(v.begin(), v.end());
        return v;
    }
};