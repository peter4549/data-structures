#pragma once
#ifndef __BINARY_TREE_H__
#define __BINARY_TREE_H__

typedef int Data;

typedef struct BinaryTreeNode {
	Data data;
	struct BinaryTreeNode* left_subtree;
	struct BinaryTreeNode* right_subtree;
} BinaryTreeNode;

BinaryTreeNode* MakeBinaryTreeNode();
Data GetData(BinaryTreeNode* binary_tree_node);
void SetData(BinaryTreeNode* binary_tree_node, Data data);

BinaryTreeNode* GetLeftSubtree(BinaryTreeNode* binary_tree_node);
BinaryTreeNode* GetRightSubtree(BinaryTreeNode* binary_tree_node);

void MakeLeftSubtree(BinaryTreeNode* binary_tree_node, BinaryTreeNode* left_subtree);
void MakeRightSubtree(BinaryTreeNode* binary_tree_node, BinaryTreeNode* right_subtree);

#endif