// exesting link list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head;
void insert(int data) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = head;
    head = temp;
}

void display() {
printf("\n");
struct node *temp2 = head;
while(temp2!= NULL){
    printf("%d |", temp2->data);
    printf("%p|", (void*)temp2->next);

      temp2 = temp2->next;
}

}

int main() {
    insert(55);
    display();
    insert(15);
    display();
    insert(25);
     display();
    insert(35);
    display();
    insert(5);
   display();
   return 0;
}