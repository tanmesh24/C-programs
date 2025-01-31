#include<stdio.h>
#include<stdlib.h>
struct node {
    int val;
    struct node *next;
};
struct node * addlast(struct node *head,int x);
void traverse(struct node *head);
int main(){
    struct node *head = NULL;
    head = addlast(head,1);
    head = addlast(head,22);
    head = addlast(head,31);
    head = addlast(head,400);
    traverse(head);
}
struct node * addlast(struct node *head,int x){
    struct node *temp;
    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->val = x;
    new_node->next = NULL;
    if(head == NULL)
    return new_node;
    for(temp = head;temp->next != NULL;temp= temp->next){
    }
    temp->next = new_node;
    return head;
}
void traverse(struct node *head){
    struct node *temp;
    for(temp = head; temp != NULL;temp = temp->next){
        printf("%d ",temp->val);
    }
}
