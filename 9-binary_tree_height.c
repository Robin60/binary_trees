#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of binary tree
 * @tree: the pointer to root node of the tree to measure the height
 * Return: height, 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lf = 0;
	size_t rt = 0;

	if (tree == NULL)
		return (0);
	lf = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rt = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((lf > rt) ? lf : rt);
}
