#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures
 * the height of a tree
 * @tree:  is a pointer to the root node of the tree
 * Return: teh height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;
	size_t max_height;

	if (!tree)
		return (0);
	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right = 1 + binary_tree_height(tree->right);
	if (left > right)
	{
		max_height = left;
	}
	else
	{
		max_height = right;
	}
	return (max_height);
}
