#include <stdio.h>
#include "binary_tree.h"

int main() {
	BinaryTreeNode* binary_tree_node1 = MakeBinaryTreeNode();
	BinaryTreeNode* binary_tree_node2 = MakeBinaryTreeNode();
	BinaryTreeNode* binary_tree_node3 = MakeBinaryTreeNode();
	BinaryTreeNode* binary_tree_node4 = MakeBinaryTreeNode();

	SetData(binary_tree_node1, 1);
	SetData(binary_tree_node2, 2);
	SetData(binary_tree_node3, 3);
	SetData(binary_tree_node4, 4);

	MakeLeftSubtree(binary_tree_node1, binary_tree_node2);
	MakeRightSubtree(binary_tree_node1, binary_tree_node3);
	MakeLeftSubtree(binary_tree_node2, binary_tree_node4);

	printf("%d \n", GetData(GetLeftSubtree(binary_tree_node1)));
	printf("%d \n", GetData(GetLeftSubtree(GetLeftSubtree(binary_tree_node1))));

	return 0;
}