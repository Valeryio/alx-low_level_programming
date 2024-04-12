#include "hash_tables.h"

/**
 * createNode - creates a node
 *
 * @key: (string), the key of the node
 * @value: (string), the value of the node
 * Description: This function creates a new node for the
 * hash table and send it
 * Return: A pointer
 */

hash_node_t *createNode(const unsigned char *key, const unsigned char *value)
{
	hash_node_t *new_node = NULL;

/*Creation and verification of a new node*/
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);

/*Allocating space for key and value strings*/
	new_node->key = malloc(strlen(key) + 1);
	new_node->value = malloc(strlen(value) + 1);
	new_node->next = NULL;

	if (!(new_node->key) || !(new_node->value))
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (NULL);
	}
/*Copying the right content to the node arguments*/
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);

	return (new_node);
}
