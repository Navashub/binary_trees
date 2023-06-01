#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is root of binary tree
 * @node: pointer to node to check
 *
 * Return:if node is root - 1.
 * 	otherwise - 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
