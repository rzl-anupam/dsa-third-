#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
 {
    struct node*head;
    struct node*tail;
}
    void insert(int data){
        struct node *temp = (node)malloc(sizeof(struct node));
         temp-> data = data;
        if( tail == NULL){
         tail = temp;

     }
     else{
     temp-> next = NULL;
     tail -> next = temp;
    }
    if(head==NULL)
    {
        head=temp;
    }
    }
    int main()
    {
        insert (5);
        insert (15);
        insert (25);

}
struct node *temp = head;
while(true){
       printf("%d","%p", temp->data', temp->next);
    temp = temp-> next;
    if (temp == NULL){
  break;
    }
}
   
 
