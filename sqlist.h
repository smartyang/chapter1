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


//print allvalue of SqList
Statue printAllSqList_Value(SqList *L);

//delete element form i to k  @ k form i+1
Statue DeleteK(SqList *L,int i, int k);

//insert element e in L by origin order
Statue InsertByOrder(SqList *L,ElemType e);

//intersect of A & B =C
Statue IntersectOfSqList(SqList *A,SqList *B,SqList *C);
