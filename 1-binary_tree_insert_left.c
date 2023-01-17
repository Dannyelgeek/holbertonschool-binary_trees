#include "binary_trees.h"

/**
 *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return(NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	parent->left = new_node;
	new_node->right = NULL;

	if (new_node->left)
		(new_node->left)->parent = new_node;

	return (new_node);
}