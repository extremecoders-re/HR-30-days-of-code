int doIt(Node* node, int currdepth, int maxdepth)
{
    if (!node) return 0;
    if (currdepth == maxdepth)
    {
        printf("%d ", node->data);
        return 1;
    }
    return doIt(node->left, currdepth+1, maxdepth) | doIt(node->right, currdepth+1, maxdepth);
}

void levelOrder(Node* root)
{
    int depth = 0;
    while(doIt(root, 0, depth++) == 1);
}