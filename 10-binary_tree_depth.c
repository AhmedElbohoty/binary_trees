#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the root node of the tree.
 *
 * Return: - depth of a binary tree.
 *         - if tree is NULL, returns 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{

    if (tree == NULL || tree->parent == NULL)
        return (0);

    return 1 + binary_tree_depth(tree->parent);
}
