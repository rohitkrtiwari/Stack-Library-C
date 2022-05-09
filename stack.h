#include <stdio.h>
#include <stdlib.h>
struct stack {
    int data;
    struct stack * next;
};
typedef struct stack * Stack; 

struct stack * st_init(struct stack *);
struct stack * Push(struct stack  *, int);
int Pop(struct stack **);
int Peek(struct stack *);
int st_size(struct stack *);
void st_display(struct stack *);
struct stack * st_clear(struct stack *);

void st_functions(){

    printf("\n\n\t************ STACK ************\n");
    printf("\n include the header file : \t#include 'stack.h'");
    printf("\n Stack Declaration : \t\tStack s1;");
    printf("\n Stack init : \t\t\ts1 = st_init(s1);");
 
    printf("\n Push an Element : \t\ts1 = Push(s1, x);");
    printf("\n Pop an Element : \t\tPop(&s1);");
    printf("\n Top of stack : \t\tx = Peek(s1);");
    printf("\n Returns Size of Stack : \tx = st_size(s1);");
    printf("\n Dsiplay the Stack : \t\tst_display(s1);");
    printf("\n To clear Stack : \t\ts1 = clear(s1);");

    printf("\n Display Module Methods : \tst_functions();");
}

struct stack * st_init(struct stack *top){ 
    top = NULL;
    return top;
}

struct stack * Push(struct stack * top, int data){
    if(top == NULL)
    {
        struct stack * temp = (struct stack *) malloc (sizeof(struct stack));
        temp->data = data;
        temp->next = NULL;
        top = temp;
        return top;
    }
    else{
        struct stack * temp = (struct stack *) malloc (sizeof(struct stack));
        temp->data = data;
        temp->next = (top);
        top = temp;
        return top;
    }
}

int Pop(struct stack ** top){
    if(*top == NULL)
        printf("\nStack is Empty!");
    else{
        struct stack * temp = (*top)->next;
        int data = (*top)->data;
        free(*top);
        *top = temp;
        return data;
    }
}

void st_display(struct stack * top){
    struct stack * p = top;
    while (p!=NULL){
        printf("%d \n", p->data);
        p = p->next;
    }
}

int Peek(struct stack *top){
    if(top == NULL){
        printf("\nStack is Empty!");
        return 0;
    }
    else
        return top->data;
}

int st_size(struct stack * top){
    if(top == NULL) return 0;
    else{
        struct stack * ptr = top;
        int count=0;
        while (ptr!=NULL)
        {
            ptr=ptr->next;
            count++;
        }
        return count;
    }
}

struct stack * st_clear(struct stack * top){
    struct stack * current = top;
    struct stack * next;
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
    top = NULL;
    return top;
}
