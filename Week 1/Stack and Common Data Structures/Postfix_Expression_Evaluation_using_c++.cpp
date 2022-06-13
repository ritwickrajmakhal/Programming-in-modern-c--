#include <iostream>
#include <stack>

using namespace std;

int isDigit(char ch){
    if(ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9' || ch == '0'){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    char postfix[] = {'1', '2', '3', '*', '+', '4', '-'};
    stack<char> s;
    for(int i=0;i<7;i++){
        char ch = postfix[i];
        if(isDigit(ch)){
            s.push(ch-'0');
        }
        else{
            int op2 = s.top(); s.pop();
            int op1 = s.top(); s.pop();
            switch (ch)
            {
            case '+':
                s.push(op1+op2);
                break;
            case '-':
                s.push(op1-op2);
                break;
            case '*':
                s.push(op1*op2);
                break;
            case '/':
                s.push(op1/op2);
                break;
            default:
                break;
            }
        }
    }
    printf("Evaluation %d\n",s.top());
    return 0;
    
}