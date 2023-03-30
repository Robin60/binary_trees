#include "binary_trees.h"

/**
 * is_tree_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 1 else 0 if not perfectL
 */

int is_tree_perfect(const binary_tree_t *tree)
{
	int lf = 0, rt = 0;

	if (tree->left && tree->right)
	{
		lf = 1 + is_tree_perfect(tree->left);
		rt = 1 + is_tree_perfect(tree->right);
		if (lf == rt && lf != 0 && rt != 0)
			return (rt);
		return (0);
	}
	else if (!tree->left && !tree->right)
		return (1);
	else
		return (0);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 1 else 0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect = 0;

	if (tree == NULL)
		return (0);
	perfect =  is_tree_perfect(tree);
	if (perfect != 0)
		return (1);
	return (0);
}
