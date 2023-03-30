#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to root node of the tree
 * Return: 0 if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int lf = 0, rt = 0;

	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
	{
		lf = binary_tree_is_full(tree->left);
		rt = binary_tree_is_full(tree->right);
		if (lf == 0 || rt == 0)
			return (0);
		return (1);
	}
	if (!tree->left && !tree->right)
		return (1);
	return (0);
}
