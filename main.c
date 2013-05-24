#include "common.h"
#include "sqlist.h"




int main(){
	//State SqList
	SqList *L;
	//Init SqList
	InitList_Sq(L);
	
	ListInsert_Sq(L,1,100);
	ListInsert_Sq(L,2,200);
	ListInsert_Sq(L,3,300);
	ListInsert_Sq(L,5,500);	
	printSqList_Value(L,1);
	printSqList_Value(L,2);
	printSqList_Value(L,3);


	printSqList_Value(L,5);
	printSqList_Value(L,-100);

	int k;
	ListDelete_Sq(L,2,k);
	printSqList_Value(L,1);
	printSqList_Value(L,2);
	printSqList_Value(L,3);

}
