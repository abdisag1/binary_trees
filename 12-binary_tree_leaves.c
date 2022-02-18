#include "binary_trees.h"
#include <stdlib.h>

size_t binary_tree_leaves(const binary_tree_t *tree){
  size_t count ;
  size_t dirleft,dirright;
  if (tree == NULL){
    return 0;
  }

  dirleft = binary_tree_leaves(tree->left);
  dirright = binary_tree_leaves(tree->right);
  count = dirleft + dirright;
  if (tree->left ==NULL && tree->right ==NULL){
    count = count +1;
    return count;
  }
  return count;
}

