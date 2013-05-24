typedef int ElemType;
#define LIST_INIT_SIZE 100
#define LIST_INCREMENT 10

typedef struct {
	ElemType *elem;
	int length;
	int listsize;
}SqList;


//init sequenceList
Statue InitList_Sq(SqList* L);

//insert sequenceList
Statue ListInsert_Sq(SqList *L,int i,ElemType e);


//delete element i in SqList L and return value e
Statue ListDelete_Sq(SqList *L,int i,ElemType e);

//print value of SqList , the index is i
Statue printSqList_Value(SqList *L,int i);

