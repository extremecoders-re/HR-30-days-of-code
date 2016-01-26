#define MAX(a,b) ((a) > (b) ? (a) : (b))
int getHeight(Node* root)
{
  if (!root) return 0;
  return MAX(getHeight(root->left), getHeight(root->right)) + 1;
}