//Swap two nodes
void swapNodes(Node** head, int pos1, int pos2){
    Node* temp1=*head;
    Node* temp2=*head;
    Node* swap=*head;
    
    if(pos1<2){
        for(int i=0;i<pos2-2;i++)
            temp2=temp2->next;
        swap=temp1->next;

        temp1->next=temp2->next->next;
        temp2->next->next=swap;
        swap=temp2->next;
        temp2->next=temp1;
        *head=swap;
        return;
    }

    for(int i=0;i<pos1-2;i++)
        temp1=temp1->next;
    for(int i=0;i<pos2-2;i++)
        temp2=temp2->next;
    swap=temp1->next;

    temp1->next=temp2->next;
    temp2->next=swap;
    
    temp2=swap->next;

    swap->next=temp1->next->next;
    temp1->next->next=temp2;

}