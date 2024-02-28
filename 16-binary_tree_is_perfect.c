#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree.
 *
 * Return: - if a binary tree is perfect, returns 1.
 *         - if tree is NULL, returns 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_full(tree) && binary_tree_balance(tree) == 0)
		return (1);

	return (0);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree.
 *
 * Return: - if a binary tree is full, returns 1.
 *         - if tree is NULL, returns 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree.
 *
 * Return: - measures the balance factor of a binary tree.
 *         - if tree is NULL, returns 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree.
 *
 * Return: - height of a binary tree.
 *         - if tree is NULL, returns 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 1;
	size_t right_height = 1;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);

	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
