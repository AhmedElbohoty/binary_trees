#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: - a pointer to the lowest common ancestor n.
 *         - NULL (failure)
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	const binary_tree_t *temp1 = first;
	const binary_tree_t *temp2 = second;

	if (first == NULL || first->parent == NULL)
		return (NULL);

	if (second == NULL || second->parent == NULL)
		return (NULL);

	while (temp1 != temp2)
	{
		if (temp1 == NULL)
			break;

		while (temp1 != temp2)
		{
			if (temp2 == NULL)
				break;

			if (temp2->parent == NULL)
				break;
			temp2 = temp2->parent;
		}

		if (temp1 == temp2)
			return ((binary_tree_t *)temp1);

		temp2 = second;
		temp1 = temp1->parent;
	}

	return ((binary_tree_t *)temp1);
}
