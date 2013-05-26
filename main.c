#include "common.h"
#include "sqlist.h"




int main(){
	//State SqList
	SqList *L;
	//Init SqList
	InitList_Sq(L);
	
	//Inster Operation
	ListInsert_Sq(L,1,100);
	ListInsert_Sq(L,2,200);
	ListInsert_Sq(L,3,300);
	ListInsert_Sq(L,4,400);	
	ListInsert_Sq(L,5,500);	
	ListInsert_Sq(L,6,600);	
	ListInsert_Sq(L,7,700);	
	//print values in SqList
	// printSqList_Value(L,1);
	// printSqList_Value(L,2);
	// printSqList_Value(L,3);
	// printSqList_Value(L,5);
	// printSqList_Value(L,-100);

	// int k;
	// ListDelete_Sq(L,2,k);
	//delete operation
	// printSqList_Value(L,1);
	// printSqList_Value(L,2);
	// printSqList_Value(L,3);
	
	//dele element from L 3 4 5
	DeleteK(L,2,2);
	
	//print all elements from L
	printAllSqList_Value(L);

}
