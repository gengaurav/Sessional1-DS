#include<stdio.h>
#include<malloc.h>

typedef struct stack{
    int data;
    struct stack* next;
};

struct stack* head = NULL;

int top=-1;

void push(int data){
   struct stack* node;
    node=(struct stack*)malloc(sizeof(struct stack));
    node->data=data;
    node->next=head;
    head=node;
    top=top+1;
}

int pop(struct stack* head){
struct stack* temp;
int x=-1;
if(top==-1){
    printf("Stack overflow");
}else{
    x=head->data;
    temp=head;
    head=head->next;
    top=top-1;
    free(temp);
}
return x;
}

void display( struct stack * head){
printf("stack is\n");
while (head!=NULL)
{printf("%d\t",head->data);
head=head->next;
}
}

int main(){
struct stack stk;
push(5);
push(8);
push(11);
push(13);
push(15);
display(head);
//printf("\n%d",pop(head));
display(head);
}