#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct node{
    int data ;
    struct node* next;
}node;

void insert(node* head,int pos){
    node *temp,*p=head;
    for (int i=0; i<pos-1; i++)
    {p=p->next;
    }temp=(node*)malloc(sizeof(node));
    printf("enter data in node ");
    scanf("%d",&temp->data);
    temp->next=p->next;
    p->next=temp;
}

void RDisplay(node* p){
    if(p!=NULL){
    printf("%d",p->data);
    RDisplay(p->next);
    }
}

int main(){
    node* head=NULL ,* tail, *temp ;
    int n;
    printf("Enter number of nodes wanted to create  : ");
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        temp=(node*)malloc(sizeof(node));
        printf("enter data in node : ");
        scanf("%d",&temp->data);
        temp->next=NULL;
        if(head==NULL){
            head=temp;
            tail=temp;
        }else{
            tail->next=temp;
            tail=temp;
        }
    }
    RDisplay(head);
    insert(head,3);
    RDisplay(head);
    return 0;
}
