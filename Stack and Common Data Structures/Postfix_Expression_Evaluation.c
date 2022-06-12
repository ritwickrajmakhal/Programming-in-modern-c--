#include <stdio.h>

typedef struct stack{
    int data[100];
    int top;
} stack;

int empty(stack *p){
    return (p->top==-1);
}
int top(stack *p){
    return p->data[p->top];
}
void push(stack *p, char x){
    p->data[++(p->top)] = x;
}
void pop(stack *p){
    if(!empty(p)){
        (p->top) = (p->top) - 1;
    }
}
int isDigit(char ch){
    if(ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9' || ch == '0'){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    stack s;
    s.top = -1;
    // Postfix expression 1 2 3 * + 4
    char postfix[] = {'1', '2', '3', '*', '+', '4', '-'};
    for(int i=0;i<7;i++){
        char ch = postfix[i];
        if(isDigit(ch)){
            push(&s,ch-'0');
        }
        else{
            int op2 = top(&s); pop(&s);
            int op1 = top(&s); pop(&s);
            switch (ch)
            {
            case '+':
                push(&s,op1+op2);
                break;
            case '-':
                push(&s,op1-op2);
                break;
            case '*':
                push(&s,op1*op2);
                break;
            case '/':
                push(&s,op1/op2);
                break;
            default:
                break;
            }
        }
    }
    printf("Evaluation %d\n",top(&s));
    return 0;
}