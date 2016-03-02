Node* removeDuplicates(Node *head)
{
    if (head)
    {
        Node *lastnode = head;
        Node *curr = head->next;
        
        while (curr)            
        {
            if (curr->data == lastnode->data)
            {
                lastnode->next = curr->next;
                free (curr);
                curr = lastnode->next;
            }
            else
            {
                lastnode = curr;
                curr = curr->next;
            }
        }
    }
    return head;
}