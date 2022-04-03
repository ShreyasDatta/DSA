#include <bits/stdc++.h>
using namespace std;
  
class Node {
public:
    int data;
    Node* next;
};
  
//Getting total Nodes in a LL
int getCount(Node* head)
{
    Node* current = head;
    int count = 0;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

//Getting intersection
void getIntersection(Node** head1, Node** head2){
    Node* temp1=*head1;
    Node* temp2=*head2;
    int count1=0, count2=0, diff, flag;

    //getting count
    count1 = getCount(temp1);
    count2 = getCount(temp2);
        
    //finding diff i.e. difference in length between two nodes
    if(count1>count2){
        diff=count1-count2;
        flag=1;
    } 
    else{
        diff=count2-count1;
        flag=0;
    }

    //iterating the longer list till the difference
    //this will make them equal distant from the intersection
    if(flag==1)
        for(int i=0; i<diff; i++)
            temp1=temp1->next;
    else    
        for(int i=0; i<diff; i++)
            temp2=temp2->next;

    //iterating till both list intersects
    while(temp1!=temp2){
        temp1=temp1->next;
        temp2=temp2->next;
    }
    cout<<"Intersection of two nodes is: "<<temp1->data;
}
  
int main()
{
    Node* newNode;
  
    Node* head1 = new Node();
    head1->data = 10;
  
    Node* head2 = new Node();
    head2->data = 3;
  
    newNode = new Node();
    newNode->data = 6;
    head2->next = newNode;
  
    newNode = new Node();
    newNode->data = 9;
    head2->next->next = newNode;
  
    newNode = new Node();
    newNode->data = 15;
    head1->next = newNode;
    head2->next->next->next = newNode;
  
    newNode = new Node();
    newNode->data = 30;
    head1->next->next = newNode;
  
    head1->next->next->next = NULL;
  
    getIntersection(&head1, &head2);
}