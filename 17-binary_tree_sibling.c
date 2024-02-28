#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node of the tree.
 *
 * Return: - NULL if node is NULL or no parent or no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (0);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
