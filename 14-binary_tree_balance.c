#include "binary_trees.h"

/**
 * binary_tree_height_b - returns binary tree height
 * @tree: pointer to the root node
 * Return: height
 */

int binary_tree_height_b(const binary_tree_t *tree)
{
	size_t lf, rt = 0;

	if (tree == NULL)
		return (0);
	lf = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
	rt = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
	return ((lf > rt) ? lf : rt);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: balance else 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lf = 0, rt = 0, total = 0;

	if (tree)
	{
		lf = ((int)binary_tree_height_b(tree->left));
		rt = ((int)binary_tree_height_b(tree->right));
		total = lf - rt;
	}

	return (total);
}
