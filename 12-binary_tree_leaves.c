#include "binary_trees.h"

/**
 * binary_tree_leaves - counts te leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: size else 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lf = 0, rt = 0, leaf = 0;

	if (tree == NULL)
		return (0);
	lf = binary_tree_leaves(tree->left);
	rt = binary_tree_leaves(tree->right);
	leaf = lf + rt;
	return ((!lf && !rt) ? leaf + 1 : leaf + 0);
}
