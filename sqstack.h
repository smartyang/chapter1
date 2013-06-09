#define STACK_INIT_SIZE 100
#define INCRESMENT 10
typedef struct{
	char *base;
	char *top;
	int stacksize;
}SqStack;


//construct a Stack
Statue InitStack(SqStack *S);


//get top item in  SqStack
Statue GetTop(SqStack *S,char *e);

//push Item in SqStack
Statue Push(SqStack *S,char e);

//pop the first value in SqStack
Statue Pop(SqStack *S,char *e);

//print elements in SqStack
Statue PrintSqStack(SqStack *S);

//test init and push funciton
Statue test_Init_SqStack();

//test all funcitons in SqStack
Statue test_SqStack();