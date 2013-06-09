//init sequenceList
#include "common.h"
#include "sqstack.h"



Statue InitStack(SqStack *S){
//init stack with the length of StackSize
	//S = (SqStack *)malloc(sizeof(SqStack));

	S->base=(char *)malloc(STACK_INIT_SIZE * sizeof(char));
	S->top=S->base;
	S->stacksize=STACK_INIT_SIZE;
	//printf("%d\n",S->stacksize);
	return OK;
}//InitStack

Statue Push(SqStack *S,char e){
//push item in SqStack
	if( S->top-S->base>=S->stacksize ){
		S->base=(char *)realloc( S->base,(STACK_INIT_SIZE+INCRESMENT) * sizeof(char));
		if(!S->base)exit(OVERFLOW);
		
		S->top=S->base+S->stacksize;
		S->stacksize+=INCRESMENT;
	}
	
	// printf("%c",e);
	// printf("%d",S->stacksize);
	//printf("%c",S->top);
	
	*(S->top)=e;
	S->top++;
	return OK;
}//Push

Statue PrintSqStack(SqStack *S){
//print SqStack  
	SqStack *p=S;
	char *i=NULL;
	for(i=p->base;i<p->top;i++){
		printf("%c\n",*(p->base));
		p->base++;
	}

}//PrintSqStack


Statue Pop(SqStack *S,char *e){
//Pop value in SqStack
	//if(S->top==S->base)return ERROR;
	*e=*(--S->top);
	return OK;
}//Pop

//get top item in  SqStack
Statue GetTop(SqStack *S,char *e){
	char *p=S->top;
	*e=*(--p);
	//printf("%c\n",e);
	return OK;
}//GetTop



Statue test_Init_SqStack(){
//test init function of SqStack
	SqStack *S = (SqStack *)malloc(sizeof(SqStack));
	InitStack(S);
	
	//printf("%d",S->stacksize);
	Push(S,'a');
	Push(S,'b');
	Push(S,'c');
	Push(S,'d');
	PrintSqStack(S);
}//test_Init

Statue test_SqStack(){
//test init function of SqStack
	SqStack *S = (SqStack *)malloc(sizeof(SqStack));
	InitStack(S);
	
	//printf("%d",S->stacksize);
	Push(S,'a');
	Push(S,'b');
	Push(S,'c');
	Push(S,'d');
	char *e;
	// GetTop(S,e);
	// printf("%c\n",*e);
	// Push(S,'c');
	// Push(S,'d');
	PrintSqStack(S);
	 printf("---------------------------\n");
	Pop(S,e);
	//printf("%c\n",*e);
	Pop(S,e);
	PrintSqStack(S);
	//printf("%c\n",*e);
	
	
}//test_Init

