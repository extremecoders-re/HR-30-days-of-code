static int getHeight(Node root)
    {
        if (root == null) return 0;
        return Math.Max(getHeight(root.left), getHeight(root.right)) + 1;
    }
  