#include<iostream>
#include<queue>
#include<stack>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct sNode
{
    int data;
    struct sNode *next;
};

void push(struct sNode** top_ref, int new_data);
int pop(struct sNode** top_ref);

struct queue
{
    struct sNode *stack1;
    struct sNode *stack2;
};

void enQueue(struct queue *q, int x)
{
    push(&q->stack1, x);
}

int deQueue(struct queue *q)
{
    int x;
    if(q->stack1 == NULL && q->stack2 == NULL)
    {
        cout<<"Q is empty"<<endl;
    }

if(q->stack2 == NULL)
{
    while(q->stack1 != NULL)
    {
        x = pop(&q->stack1);
        push(&q->stack2, x);

    }
}

x = pop(&q->stack2);
return x;
}

void push(struct sNode** top_ref, int new_data)
{
    struct sNode* new_node =
    (struct sNode*) malloc(sizeof(struct sNode));
        if(new_node == NULL)
        {
            cout<<"Stack overflow \n"<<endl;
        }

new_node->data = new_data;

new_node->next = (*top_ref);

(*top_ref) = new_node;
}

int pop(struct sNode** top_ref)
{
    int res;
    struct sNode *top;

    if(*top_ref == NULL)
    {
        cout<<"Stack overflow \n"<<endl;
    }
    else
    {
        top = *top_ref;
        res = top->data;
        *top_ref = top->next;
        free(top);
        return res;

    }
}

int main()
{
    struct queue *q = (struct queue*)malloc(sizeof(struct queue));
    q->stack1 = NULL;
    q->stack2 = NULL;
    enQueue(q, 1);
    enQueue(q, 2);
    enQueue(q, 3);

    cout<<deQueue(q))<<endl;
    cout<<deQueue(q))<<endl;
    cout<<deQueue(q))<<endl;
}
