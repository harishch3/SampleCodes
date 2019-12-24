#include<iostream>

class Node
{
public:
int nData;
Node *next;
};

void push(Node **head,int nData)
{
  Node *temp = new Node();
  temp->nData = nData;
  temp->next = *head;
  *head = temp;
}

int getSize(Node *head)
{
int counter=0;
while(head!=NULL)
{
counter++;
std::cout<<head->nData<<std::endl;
head = head->next;
}
return counter;
}

void insertAfterNode(Node *prev_node,int nData)
{
  Node *new_node = new Node();
  new_node->nData = nData;
  new_node->next = prev_node->next;

  prev_node->next = new_node;
}

void append(Node **head,int nData)
{
  Node *new_node = new Node();
  new_node->nData = nData;
  new_node->next = NULL;

  Node *last = *head;

  if(*head==NULL)
  {
   *head = new_node;
   return;
  }

  while(last->next!=NULL)
  {
    last = last->next;
  }
  last->next = new_node;
    return;
}
void deleteNode(Node **head,int nKey)
{
Node *temp = *head;
Node *prev;

if(temp!= NULL && temp->nData == nKey )
{
    *head = temp->next;
    delete(temp);
    return;
}

while(temp!=NULL && temp->nData!=nKey)
{
    prev= temp;
    temp = temp->next;
}
if(temp == NULL)
    return;

prev->next = temp->next;
}

int main()
{
  Node *head=NULL;
  push(&head,10);
  push(&head,20);
  push(&head,30);
  push(&head,40);
  push(&head,50);
  push(&head,60);
  push(&head,70);
  push(&head,80);
  push(&head,90);
  push(&head,100);

  insertAfterNode(head->next,75);

  append(&head,5);

  deleteNode(&head,50);
  std::cout<<"Size of linkedlist"<<getSize(head)<<std::endl;
  return 0;
}

