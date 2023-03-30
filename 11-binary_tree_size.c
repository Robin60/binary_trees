#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree:  pointer to the root node of the tree to measure the size
 * Return: size else 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;
	size_t lf = 0, rt = 0;

	if (tree == NULL)
		return (0);
	lf = binary_tree_size(tree->left);
	rt = binary_tree_size(tree->right);
	size = rt + lf + 1;

	return (size);
}
