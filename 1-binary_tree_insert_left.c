#include "binary_trees.h"
#include <stdlib.h>
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value){

  binary_tree_t *new_bt, *temp;
  new_bt = malloc(sizeof(binary_tree_t));
  if (new_bt ==NULL)
    return NULL;
  new_bt-> parent = parent ;
  new_bt-> left = NULL;
  new_bt-> right = NULL;
  new_bt-> n = value;

  if (parent->left != NULL  ){
    temp = parent->left;
    parent->left= new_bt;
    new_bt->left = temp;
   
  }
  return new_bt; }
