//
// Created by 王青龙 on 2017/3/25.
//

#include "solution.h"


TreeNode *Solution::buildTree(std::vector<int> &preorder, std::vector<int> &inorder) {
    return constructCore(preorder, inorder, 0, preorder.size() - 1, inorder.size() - 1);
}

TreeNode *
Solution::constructCore(std::vector<int> &preorder, std::vector<int> &inorder, int ps, int pe, int is, int ie) {
    if (ps > pe) {
        return nullptr;
    }
    auto root = new TreeNode(preorder[ps]);

    int pos;
    for (int i = is; i <= ie; ++i) {
        if (inorder[i] == preorder[ps]) {
            pos = i;
            break;
        }
    }

    root->left = constructCore(preorder, inorder, ps + 1, ps + pos - is, is, pos - 1);
    root->right = constructCore(preorder, inorder, pe - (ie - pos) + 1, pe, pos + 1, ie);
    return root;
}
