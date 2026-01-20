#include<bits/stdc++.h>
using namespace std;

int maxHeight(TreeNode* head)
{
    TreeNode* root = head;
    if(root==nullptr)
    {
        return 0;
    }

    int lh = maxHeight(root->left);
    int rh = maxHeight(root->right);

    return 1+max(lh, rh);
}

int main()
{
    return 0;
}