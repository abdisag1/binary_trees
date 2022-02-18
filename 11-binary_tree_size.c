#include "binary_trees.h"
#include <stdlib.h>

size_t binary_tree_size(const binary_tree_t *tree){
  int dirleft, dirright;
  if (tree ==NULL){
    return 0;
  }
  if ((tree->left == NULL) && (tree->right == NULL))
    {
      return 1;
    }
  dirleft = binary_tree_size(tree->left);
  dirright = binary_tree_size(tree->right);
  return dirleft + dirright +1;

}
