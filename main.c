#include "common.h"
#include "sqlist.h"


//void test_Other(){
//	//State SqList
//	SqList *L;
//	//Init SqList
//	InitList_Sq(L);
//	
//	//Inster Operation
//	ListInsert_Sq(L,1,100);
//	ListInsert_Sq(L,2,200);
//	ListInsert_Sq(L,3,300);
//	ListInsert_Sq(L,4,400);	
//	ListInsert_Sq(L,5,500);	
//	ListInsert_Sq(L,6,600);	
//	ListInsert_Sq(L,7,700);	
//	//print values in SqList
//	// printSqList_Value(L,1);
//	// printSqList_Value(L,2);
//	// printSqList_Value(L,3);
//	// printSqList_Value(L,5);
//	// printSqList_Value(L,-100);
//
//	// int k;
//	// ListDelete_Sq(L,2,k);
//	//delete operation
//	// printSqList_Value(L,1);
//	// printSqList_Value(L,2);
//	// printSqList_Value(L,3);
//	
//	//dele element from L 3 4 5
//	//DeleteK(L,2,2);
//	
//	//print all elements from L
//	//printAllSqList_Value(L);
//
//	InsertByOrder(L,550);
//	InsertByOrder(L,900);
//	InsertByOrder(L,90);
//	printAllSqList_Value(L);
//	
//
//	//IntersectOfSqList();
//
//}




//void testInterSect(){	
	//Interserct test
	//State SqList	
	//SqList *A;
	//SqList *B;
	//SqList *C;
	//Init SqList
	//InitList_Sq(A);
	//InitList_Sq(B);
	//InitList_Sq(C);
	//Inster Operation
//	ListInsert_Sq(A,1,100);
//	ListInsert_Sq(A,2,200);
//	ListInsert_Sq(A,3,300);
//	ListInsert_Sq(A,4,400);
//
//
//
//	ListInsert_Sq(B,1,200);
//	ListInsert_Sq(B,2,800);
//	ListInsert_Sq(B,3,100);
//	ListInsert_Sq(B,4,400);	
	
	//IntersectOfSqList(A,B,C);
	//printAllSqList_Value(A);
//}


int main(){
	//Interserct test
	//State SqList	
	SqList *A;
	InitList_Sq(A);
	printf("%d\n",A->length);


	SqList *B;
	InitList_Sq(B);
        printf("%d\n",B->length);
	
	////ListInsert_Sq(A,1,100);
	////ListInsert_Sq(A,2,200);
	//ListInsert_Sq(A,3,300);
	//ListInsert_Sq(A,4,400);



	//ListInsert_Sq(B,1,200);
	//ListInsert_Sq(B,2,800);
	//ListInsert_Sq(B,3,100);
	//ListInsert_Sq(B,4,400);	
	
	//IntersectOfSqList(A,B,C);
	//printAllSqList_Value(A);
	
	return OK;
}








