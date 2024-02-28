#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the root node of the tree.
 *
 * Return: - NULL if node is NULL or no parent or no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	grand = node->parent->parent;

	if (grand == NULL)
		return (NULL);

	if (grand->left == node->parent)
		return (grand->right);
	else
		return (grand->left);
}
