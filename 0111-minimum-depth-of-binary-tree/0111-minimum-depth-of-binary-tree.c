/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root) {
    if(root ==NULL)
    {
        return 0;
    }
int l=minDepth(root->left);
int r=minDepth(root->right);


if(l==0)  {
return r+1;
}
if(r==0)  {
return l+1;
}
if(l<r)
{
    return l+1;
}
return r+1;


}