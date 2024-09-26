//Problem Statement
//Write a Program to Evaluate Postfix Expression
#include<iostream>
using namespace std;
#define size 100
int Eval_Postfix(char *ch); //to evalute postfix expression
int isoperator(char op); //character is operator or not
void push(int x); //push into stack
int pop(); //pop into stack
int power(int x, int y); //calculate a pow b
int stack[size];
int top = -1;
int main() {
char post_expr[size];
int ans;
cout<<"Enter Postfix Expression";
cin>>post_expr;
ans = Eval_Postfix(post_expr);
cout<<endl<<"Result : "<<ans;
return 0;
}
int Eval_Postfix(char *ch) {
int i = 0, a = 0, b = 0, c = 0;
while(ch[i]!=NULL) {
if(isoperator(ch[i])) {
b = pop();
a = pop();
switch(ch[i]) {
case '+':
c = a + b;
push(c);
break;
case '-':
c = a - b;
push(c);
break;
case '*':
c = a * b;
push(c);
break;
case '/':
c = a / b;
push(c);
break;
case '$':
c = power(a, b);
push(c);
break;
}
}
else {
c = int(ch[i]-'0');
push(c);
}
i++;
}
c = pop();
return c;
}
int isoperator(char ch) {
if(ch=='$'||ch=='*'||ch=='/'||ch=='+'||ch=='-')
return 1;
else
return 0;
}
void push(int ch) {
top = top + 1;
stack[top] = ch;
}
int pop() {
int ch = stack[top];
top = top-1;
return ch;
}
int power(int x, int y) {
int res = 1;
for(int i=1;i<=y;i++) {
res = res * x;
}
return res;
}
