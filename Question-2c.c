#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node* next;
}node ;

void RDisplay(node* p){
    if(p!=NULL){
    printf("%d\t",p->data);
    RDisplay(p->next);
    }
}

node* reverse(node* head){
    node *prev=NULL,*curr=head,*nxt=head->next;
    while (curr!=NULL)
    {curr->next=prev;
    prev=curr;
    curr=nxt;
    if (nxt!=NULL)
    {nxt=nxt->next;
    }
    }
    return prev;
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
    head = reverse(head);
    RDisplay(head);
    return 0;
}