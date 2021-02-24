#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"

BinaryTreeNode* MakeBinaryTreeNode() {
	BinaryTreeNode* binary_tree_node = (BinaryTreeNode*)malloc(sizeof(BinaryTreeNode));
	binary_tree_node->left_subtree = NULL;
	binary_tree_node->right_subtree = NULL;
	return binary_tree_node;
}

Data GetData(BinaryTreeNode* binary_tree_node) {
	return binary_tree_node->data;
}

void SetData(BinaryTreeNode* binary_tree_node, Data data) {
	binary_tree_node->data = data;
}

BinaryTreeNode* GetLeftSubtree(BinaryTreeNode* binary_tree_node) {
	return binary_tree_node->left_subtree;
}

BinaryTreeNode* GetRightSubtree(BinaryTreeNode* binary_tree_node) {
	return binary_tree_node->right_subtree;
}

void MakeLeftSubtree(BinaryTreeNode* binary_tree_node, BinaryTreeNode* left_subtree) {
	if (binary_tree_node->left_subtree != NULL)
		free(binary_tree_node->left_subtree);

	binary_tree_node->left_subtree = left_subtree;
}

void MakeRightSubtree(BinaryTreeNode* binary_tree_node, BinaryTreeNode* right_subtree) {
	if (binary_tree_node->right_subtree != NULL)
		free(binary_tree_node->right_subtree);

	binary_tree_node->right_subtree = right_subtree;
}