#include "common.h"
//#include "sqlist.h"
// #include "LinkList.h"
#include "sqstack.h"

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


//void test_Intersect(){
//	
//	SqList *A=(SqList *)malloc(sizeof(SqList));
//	InitList_Sq(A);
//
//	SqList *B=(SqList *)malloc(sizeof(SqList));
//	InitList_Sq(B);
//
//	SqList *C=(SqList *)malloc(sizeof(SqList));
//	InitList_Sq(C);
//
//
//	SqList *D=(SqList *)malloc(sizeof(SqList));
//	InitList_Sq(D);
//
//
//	
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
//	
//	IntersectOfSqList(A,B,C);
//	//printAllSqList_Value(C);
//		
//	
//	DivOfSqList(A,C,D);
//	printAllSqList_Value(D);
//
//
//}
//
//void test_compare(){
//	SqList *A=(SqList *)malloc(sizeof(SqList));
//	InitList_Sq(A);
//
//	SqList *B=(SqList *)malloc(sizeof(SqList));
//	InitList_Sq(B);
//	
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
//
//	CompareAwithB(A,B);
//
//}
//
//void test_Merge(){
//	SqList *A=(SqList *)malloc(sizeof(SqList));
//	InitList_Sq(A);
//	
//
//	ListInsert_Sq(A,1,100);
//	ListInsert_Sq(A,2,200);
//	ListInsert_Sq(A,3,300);
//	ListInsert_Sq(A,4,400);
//
//	ListInsert_Sq(A,5,200);
//	ListInsert_Sq(A,6,200);
//	ListInsert_Sq(A,7,300);
//	ListInsert_Sq(A,8,900);
//	ListInsert_Sq(A,8,900);
//	ListInsert_Sq(A,8,900);
//	
//
//	printAllSqList_Value(A);
//	MergeSqList(A);
//	printAllSqList_Value(A);
//
//
////	int e=0;
////	ListDelete_Sq(A,1,e);
////	ListDelete_Sq(A,2,e);
////	ListDelete_Sq(A,3,e);
////	ListDelete_Sq(A,4,e);
////	
////	printf("%d\n",A->length);
////
////	printAllSqList_Value(A);
//
//}
//
//
//
//void test_TransSqList(){
//	SqList *A=(SqList *)malloc(sizeof(SqList));
//	InitList_Sq(A);
//	
//
//	ListInsert_Sq(A,1,100);
//	ListInsert_Sq(A,2,200);
//	ListInsert_Sq(A,3,300);
//	ListInsert_Sq(A,4,400);
//
//	ListInsert_Sq(A,5,500);
//	ListInsert_Sq(A,6,600);
//	ListInsert_Sq(A,7,700);
//
//	TransSqList(A);
//	printAllSqList_Value(A);
//
//}
//


// void test_CreateLinkList(){

	// LinkList link;
	// link=CreateLinkListFromLast(link,9);
	
	// if(link==NULL)
		// printf("null value\n");
	// PrintValueInLinkList(link);

// }

// void test_InsertInLinkList(){
	// LinkList link;
	// link=CreateLinkListFromLast(link,5);
	
	// PrintValueInLinkList(link);

	// link=InsertInLinkList(link,6,100);


	// PrintValueInLinkList(link);
// }


// void test_DeleteInLinkList(){
	// LinkList link;
	// link=CreateLinkListFromLast(link,3);
	// link=InsertInLinkList(link,2,100);

	// PrintValueInLinkList(link);

	// DeleteLinkList(link,2);
	
	// printf("-------\n");	

	// PrintValueInLinkList(link);
// }



// void test_LinkLocItem(){
	// LinkList link;
	// link=CreateLinkListFromLast(link,3);
	// PrintValueInLinkList(link);
	// printf("-------\n");	
	// int value=LinkLocItem(link,2);
	// printf("value = %d",value);
// }

// void test_LenOfLinkList(){
	// LinkList link;
	// link=CreateLinkListFromLast(link,5);
	// PrintValueInLinkList(link);
	// int length=LenOfLinkList(link);
	// printf("length = %d",length);
// }

// void test_CombineTwoLinkList(){
	// LinkList link1;
	// link1=CreateLinkListFromLast(link1,3);
	// PrintValueInLinkList(link1);
	
	// LinkList link2;
	// link2=CreateLinkListFromLast(link2,3);
	// PrintValueInLinkList(link2);
	
	// printf("-------\n");	
	// LinkList link3=CombineTwoLinkList(link1,link2);
	// PrintValueInLinkList(link3);
// }


int main(){
	
	//test_compare();
	//test_Merge();
	//test_TransSqList();

	//test_CreateLinkList();
	
	//test_InsertInLinkList();	
	//test_DeleteInLinkList();
	//test_LinkLocItem();
	//test_LenOfLinkList();
	//test_CombineTwoLinkList();
	//test_Init_SqStack();
	test_SqStack();
	
	return OK;
}

