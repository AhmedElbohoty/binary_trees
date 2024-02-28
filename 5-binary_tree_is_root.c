#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root.
 * @node: pointer to the node to check.
 *
 * Return: - If node is a root, returns 1
 *         - Else, returns 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent != NULL)
		return (0);

	return (1);
}
