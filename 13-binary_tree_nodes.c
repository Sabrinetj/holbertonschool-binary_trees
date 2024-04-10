#include "binary_trees.h"
/**
 * binary_tree_nodes -  function that cont the nodes
 * @tree: is a pointer to the root node of tree
 * Return: the number of leaves
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	unsigned int cont = 0;

	if (!tree)
		return (0);
	if ((tree->left || tree->right))
	cont = (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	return (cont);
}
