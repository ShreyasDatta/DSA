//Print Nth Node from end
void getNodeFromEnd(Node** head, int pos){
    Node* temp=*head;
    int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    cout<<count<<endl;
    int nth=count-pos;
    temp=*head;
    for(int i=0;i<nth;i++){
        temp=temp->next;
    }
    cout<<"Nth Node data is: "<<temp->data<<endl;
}