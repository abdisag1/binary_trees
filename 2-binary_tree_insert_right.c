#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - creates a binary tree node
 * @parent: parnt of the node to create
 * @value: value to store in new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value){

  binary_tree_t *new_bt, *temp;
  new_bt = malloc(sizeof(binary_tree_t));
  if (new_bt ==NULL)
    return NULL;
  new_bt-> parent = parent ;
  new_bt-> left = NULL;
  new_bt-> right = NULL;
  new_bt-> n = value;

  if (parent->right != NULL  ){
    temp = parent->right;
    parent->right= new_bt;
    new_bt->right = temp;
  }
  return new_bt; }
