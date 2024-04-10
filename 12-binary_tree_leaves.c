#include "binary_trees.h"
/**
 * binary_tree_leaves - a function that counts
 * the leaves in a binary tree
 * @tree: is a pointer to the root node tree
 * Return: the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	unsigned int conteur = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		conteur++;
	else
		conteur = (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	return (conteur);
}
