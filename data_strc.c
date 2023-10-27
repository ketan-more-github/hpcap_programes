// data structure 1 lininer -> arra stack queue linklist
                  // 2 non-lininer  -> tree graphs; 
//Algorithums 1.sorting 
              //2.serching 

#include<stdio.h>

struct stack{

  int top;
  int arr[20];
  int size

};

 void init(struct stack *s){
    
       s->top = -1;
       s->size = 5;
 }
 
 void push(struct stack *s , int val){
 
      if(!isfull(s)){
        s->top = s->top+1;
        s->arr[s->top]=val;
      }else{
        cout<<"stack is full";
      }
 
 }
  int pop(struct stack * s){
        int temp = -1;
      if(!isEmpty(s)){
        temp = s->arr[s->top];
        s->top--;
      }else{
        cout<<"stack is empty";
      }
    return temp;
 }
 
 int isfull(struct stack * s){
 
    if(s->top == s->size-1){
      return 1;
    }
    else{
    return 0;
    }
 }
 int isEmpty( struct stack *s){
    
    if(s->top==-1){
      return 1;
    }
    else{
    return 0;
    }
  
 }


int main(){

  struct stack st;
   init(&st);
   push(&st,10);
   push(&st,20);
   printf("%d\n" , pop(&st));
   printf("%d\n" , pop(&st));

return 0;
}
