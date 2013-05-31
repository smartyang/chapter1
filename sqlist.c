//init sequenceList
#include "common.h"
#include "sqlist.h"



Statue InitList_Sq(SqList* L){
	//fetch storage for Pointer L
	(*L).elem=(ElemType *)malloc( LIST_INIT_SIZE * sizeof(ElemType) );
	if(!(*L).elem)exit(OVERFLOW);
	(*L).length=0;
	(*L).listsize=LIST_INIT_SIZE;
	return OK;
}//InitList_Sq



Statue ListInsert_Sq(SqList* L,int i,ElemType e){
	//condition for insert value
	if(i<1 || i>L->length+1)
		return ERROR;
	//fetch new space if storage is full
	if(L->length>=LIST_INIT_SIZE){
		ElemType * newBase=(ElemType *)realloc( (*L).elem ,(L->listsize + LIST_INCREMENT ) * sizeof(ElemType) );
		if(!newBase) exit(OVERFLOW);
		L->elem = newBase;
		L->listsize+=LIST_INCREMENT;
	}
	
	//insert operation
	int k=0;
	for(k=L->length;k>=i;k--) (L->elem)[k]=(L->elem)[k-1];
	
	(L->elem)[i-1]=e;	
	L->length++;
	
	return OK;

}//ListInsert_Sq


Statue ListDelete_Sq(SqList *L,int i,ElemType e){
	//delete element from SqList L , index i
	if(i<1 || i>L->length){
		printf("wrong position\n");
		return ERROR;
	}
	else{	
		int start=0;
		for(start=i;start<=L->length;start++)
			(L->elem)[start-1]=(L->elem)[start];
		
		e=(L->elem)[i-1];
		//printf("dele value %d\n",e);
		
		L->length--;
		return OK;
		}
		
}//ListDelete_Sq




Statue printSqList_Value(SqList *L,int i){
//print value in position i ** the statring poing is 1
	if(i<1 || i>L->length) printf("wrong index\n");
	else
	printf("value is %d\n",(L->elem)[i-1]);
	
	return OK;

}//printSqList_Value


Statue printAllSqList_Value(SqList *L){
	int i=0;	
	for(i=0;i<L->length;i++)
		printf( "%d\n",(*L).elem[i] );
	
	return OK;
}//printAllSqList_Value


Statue DeleteK(SqList *L,int i, int k){
	//delete element form i to k  @ k form i+1
	if(i>0 && i<=L->length && k>=0 && k<=L->length-i){
			int j=0;
			for(j=i+k;j<=L->length;j++)
				(*L).elem[j-k]=(*L).elem[j];
			L->length-=k;
		return OK;
	}else{
		printf("ERROR i value or k value");
		return ERROR;
	 }
}//DeleteK




Statue InsertByOrder(SqList *L,ElemType e){
//insert element e in L by order
	int i=1;
	while( (*L).elem[i-1]<e && i<=L->length )
		i++;
	ListInsert_Sq(L,i,e);
	return OK;
}


Statue IntersectOfSqList(SqList *A,SqList *B,SqList *C){
//intersect of A and B = C	
	int i=1;
	int j=1;
//	int k=0;
	for(i=1;i<=A->length;i++){
		for(j=1;j<=B->length;j++){
			if( (*A).elem[i-1]==(*B).elem[j-1] )
				(*C).elem[ C->length++ ] = (*A).elem[i-1];
		}
	}

	return OK;
}


Statue DivOfSqList(SqList *A,SqList *unionList,SqList *C){
	//div fo SqList
	int flag=0;
	
	int i=0;
	
	int j=0;
	
	for(i=1;i<=A->length;i++){
		for(j=1;j<=unionList->length;j++){
			if( (*A).elem[i-1]==(*unionList).elem[j-1] ){
				flag=1;
				}
		}	
		if(flag==0)
			(*C).elem[C->length++]=(*A).elem[i-1];
		flag=0;
	}
		
	return OK;

}//DivOfSqList



Statue IsSqListVoid(SqList *A){
//just SqList A if void return 0; if not void return 1;
	if(A->length==0)
		return 0;
	else
	 	return 1;
}//IsSqListVoid


Statue CompareAwithB(SqList *A,SqList *B){
//just A and  equal return 0, a>b return 1, a<b return 2
	SqList *C=(SqList *)malloc(sizeof(SqList));
	InitList_Sq(C);
	IntersectOfSqList(A,B,C);		
	
	SqList *leftA=(SqList *)malloc(sizeof(SqList));
	InitList_Sq(leftA);	
	
	SqList *leftB=(SqList *)malloc(sizeof(SqList));
	InitList_Sq(leftB);

	DivOfSqList(A,C,leftA);	
	DivOfSqList(A,B,leftB);

	if(IsSqListVoid(leftA)==0 && IsSqListVoid(leftB)==0 ){
		printf("a=b\n");
		return 0;
	}
		
	if( (*leftA).elem[0]>(*leftB).elem[0] ){
		printf("a>b\n");
		return 1;
	}
		
		
	if( (*leftA).elem[0]<(*leftB).elem[0] ){
		printf("a<b\n");
		return 2;

	}
	else{
		printf("ERROR\n");
		return ERROR;
	}
}//CompareAwithB




Statue MergeSqList(SqList *A){
//MergeSqList  
	int i=0;
	int j=0;
	for (i=1;i<=A->length;i++){
		for(j=i+1;j<=A->length;j++){
			if( (*A).elem[i-1] == (*A).elem[j-1] ){
				printf("node %d\n",(*A).elem[i-1]);
				int e=0;
				ListDelete_Sq(A,j,e);
			//	printf("length %d\n",A->length);
				j--;
			}	
		}
		//printf("%s\n","time");
	}
	
	return OK;
}//MergeSqList



Statue TransSqList(SqList *L){
//TransSqList
	int temp=0;
	int index=1;
	for(index=1;index<=(L->length)/2;index++){
		temp=(*L).elem[index-1];

		(*L).elem[index-1]=(*L).elem[L->length-index];

		(*L).elem[L->length-index]=temp;

	}
	
	return OK;

}//TransSqList
