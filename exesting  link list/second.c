#include<stdio.h> 
#include<stdlib.h>

struct node {
 int data;
 struct node *p;

};

int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node))
    struct node *p1 = (struct node*)malloc(sizeof(struct node));
    struct node *p2 = (struct node*)malloc(sizeof(struct node));
    struct node *p = (struct node*)malloc(sizeof(struct node));

    // filing data
    p1->data = 3;
    p2->data = 53;
    p3->data = 83;

    // filling pointer
        p1->p = p2;
        p2->p = p3;
        p3->p = NULL;
        head->p = p1;

        struct node *temp = head->p;
        while (temp ! = NULL)
        {
            printf("1");
            printf(" hey %d\n",temp->data);
            temp = temp->p;
        }

    // fillingallocation memory
    free(p3);
    free(p2);
    free (p1);
    free(head);
        return 0;



}