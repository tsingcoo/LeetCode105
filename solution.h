//
// Created by 王青龙 on 2017/3/25.
//

#ifndef LEETCODE105_SOLUTION_H
#define LEETCODE105_SOLUTION_H

#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
    TreeNode *buildTree(std::vector<int> &preorder, std::vector<int> &inorder);

    TreeNode *constructCore(std::vector<int> &preorder, std::vector<int> &inorder, int ps, int pe, int is, int ie);
};

#endif //LEETCODE105_SOLUTION_H
