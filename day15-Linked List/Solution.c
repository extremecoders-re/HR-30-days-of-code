Node* insert(Node *head,int data)
{
    struct Node *temp, *lastNode;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    if (!head) return temp; 
    else
    {
        lastNode = head;
        while (lastNode->next) lastNode = lastNode->next;
        lastNode->next = temp;
        return head;
    }
}