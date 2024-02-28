#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the parent node of the node to create
 * @value: Tthe value to put in the new node
 *
 * Return: - Pointer to the new node (Success)
 *         - Null or if the parent is NULL (Failure)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	/* Create new node */
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	/**
	 * If parent already has a left-child, the new node must take
	 * its place, and the old left-child must be set as
	 * the left-child of the new node
	 */

	if (parent->left != NULL)
		node->left = parent->left;

	parent->left = node;

	return (node);
}

