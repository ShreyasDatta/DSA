//Find and remove duplicate nodes
void findDuplicate(Node** head){
    Node* temp1=*head;
    Node* temp2;
    Node* toDelete;
    Node* dup;
    while(temp1!=NULL){
        temp2=temp1;
        while(temp2->next!=NULL){
            if(temp1->data==temp2->next->data){
                dup=temp2->next;
                temp2->next=temp2->next->next;
                free(dup);
            }
            else
                temp2=temp2->next;
        }
        temp1=temp1->next;
    }
}