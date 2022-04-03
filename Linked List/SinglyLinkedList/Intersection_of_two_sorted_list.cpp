#include<bits/stdc++.h>
using namespace std;
 
struct Node {
    int data;
    Node* next;
};

void push(Node** head_ref, int new_data)
{
    Node* new_node = (Node*)malloc(
        sizeof(Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
 
void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data <<" ";
        node = node->next;
    }
    cout<<"\n";
}
 
void intersectionOfSortedList(Node** head1, Node** head2){
    Node* temp1=*head1;
    Node* temp2=*head2;

    while(temp1!=NULL || temp2!=NULL){
        if(temp1->data>temp2->data)
            temp2=temp2->next;
        else if(temp2->data>temp1->data)
            temp1=temp1->next;
        else{
            cout<<"Intersection point is: "<<temp1->data;
            return;
        }
            
    }
}

int main()
{
    /* Start with the empty lists */
    Node* a = NULL;
    Node* b = NULL;
    Node* intersect = NULL;
 
    /* Let us create the first sorted
     linked list to test the functions
     Created linked list will be
     1->2->3->4->5->6 */
    push(&a, 6);
    push(&a, 5);
    push(&a, 4);
    push(&a, 3);
    push(&a, 2);
    push(&a, 1);
 
    /* Let us create the second sorted linked list
   Created linked list will be 2->4->6->8 */
    push(&b, 8);
    push(&b, 6);
    push(&b, 4);
    push(&b, 2);
    
    cout<<"List1 is: ";
    printList(a);
    cout<<"List2 is: ";
    printList(b);
    /* Find the intersection two linked lists */
    intersectionOfSortedList(&a, &b);
}