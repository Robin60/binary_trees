#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree:  is a pointer to the root node of the tree to count
 * Return: size else 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t no_of_nodes = 0;

	if (tree == NULL)
		return (0);
	no_of_nodes += ((tree->left || tree->right) ? 1 : 0);
	no_of_nodes += binary_tree_nodes(tree->left);
	no_of_nodes += binary_tree_nodes(tree->right);

	return (no_of_nodes);
}
