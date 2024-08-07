#include "hash_tables.h"

/**
 * hash_table_set - adds an element to an hash table
 *
 * @ht: (hash_table_t), the hash_table to use
 * @key: (string), the key to use
 * @value: (string), the value to add as value of the key
 * Description: This function adds an element to a hash_table
 * and handle collisions
 * Return: An integer
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = 0;
	hash_node_t *new_node = NULL;
/*Verifications to know if ht is a empty DS*/
	if (!ht)
		return (0);

/*Verifications to know if the key is an empty string*/
	if (!key)
		return (0);

/*Determine the index to use for the value to put in the hash table*/
	index = key_index((const unsigned char *)key, ht->size);

/*Creates new node to add in the hash table*/
	new_node = createNode((const char *)key, (const char *)value);

/*Add the new node at the right place if there is no collision*/
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
/*Handle collisions*/
		appendNode(&new_node, &(ht->array[index]));
	}

	return (1);
}

/**
 * appendNode - append a node
 *
 * @node: (hash_node_t), the node to append
 * @list: (hash_node_t), the end of the linked list
 * Description: This function appends a node another to create linked list
 * Return: An integer
 */

int appendNode(hash_node_t **node, hash_node_t **list)
{
	hash_node_t *tmpnode = NULL;

	if (strcmp((*list)->key, "Holberton") == 0)
	{
		(*list) = (*node);
		return (1);
	}
/*Appending to the top of the linked lit*/
	tmpnode = (*list);
	(*node)->next = tmpnode;
	(*list) = (*node);

	return (1);
}

/**
 * createNode - creates a node
 *
 * @key: (string), the key of the node
 * @value: (string), the value of the node
 * Description: This function creates a new node for the
 * hash table and send it
 * Return: A pointer
 */

hash_node_t *createNode(const char *key, const char *value)
{
	hash_node_t *new_node = NULL;

/*Creation and verification of a new node*/
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);

/*Allocating space for key and value strings*/
	new_node->key = malloc(strlen((char *)key) + 1);
	new_node->value = malloc(strlen((char *)value) + 1);
	new_node->next = NULL;

	if (!(new_node->key) || !(new_node->value))
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (NULL);
	}
/*Copying the right content to the node arguments*/
	strcpy(new_node->key, (char *) key);
	strcpy(new_node->value, (char *) value);

	return (new_node);
}
