#include<stdio.h>
#include<malloc.h>

typedef struct dnode
{int data ;
struct dnode*next;
struct dnode*prev;
}dnode;

dnode* tail = NULL;

dnode* create(dnode*head);

void main(){
    dnode*head=NULL,*temp;
    int n;
    printf("Enter the no. of node want to create in double linked list ");
    scanf("%d",&n);
    for (int i=0; i<n; i++)
    {head=create(head);
    }temp=head;
    while (temp!=NULL)
    {printf("%d\t",temp->data);
    temp=temp->next;
    }
}

dnode* create(dnode* head){
dnode *temp;
temp=(dnode*)malloc(sizeof(dnode));
printf("Enter data in node ");
scanf("%d",&temp->data);
if (head==NULL)
{head=temp;
head->next=NULL;
head->prev=NULL;
tail=head;
}else{
    temp->next=NULL;
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
return head;
}