//init sequenceList
#include "common.h"
#include "LinkList.h"





LinkList CreateLinkListFromLast(LinkList L,int n){
	//create linkList form pointer L, which contains a head point
	
	L=(LinkList)malloc(sizeof(LNode));
	
	L->next=NULL;

	int i;

	for(i=n;i>0;i--){
		LinkList p=(LinkList)malloc(sizeof(LNode));
		scanf("%d",&p->data);
		//p->data=1;
		p->next=L->next;
		L->next=p;
			
	}
	
	//if(L==NULL)
	//	printf("---null\n");

	return L;
}//CreateLinkListFromLast


Statue PrintValueInLinkList(LinkList L){

	//if(L==NULL)
	//	printf("null\n");
	//PrintValueaInLinkList
	

	LinkList p=(LinkList)malloc(sizeof(LNode));
	p=L->next;	//first node
	
	//printf("data is %d\n",p->data);
	while(p!=NULL){
		printf("data is %d\n",p->data);
		p=p->next;
	}
	
	//printf("data   %d\n",L->next->data);

	return OK;
}//PrintValueInLinkList

LinkList InsertInLinkList(LinkList L,int i, int value){
//insert value in LinkList, and return head pointer
	LinkList newNode=(LinkList)malloc(sizeof(LNode));
	
	
	LinkList p=(LinkList)malloc(sizeof(LNode));
	
	p=L;

	//PrintValueInLinkList(p);

	newNode->data=value;
	
	//insert p before i


	int k=0;
	while(p!=NULL && k<i-1){
		p=p->next;	
		k++;
	}
	
	//printf("n is %d\n",k);

	newNode->next=p->next;
	p->next=newNode;

	return L;

}//InsertInLinkList


LinkList DeleteLinkList(LinkList L,int i){
//delement element i in LinkList L
	LinkList p=(LinkList)malloc(sizeof(LNode));

	p=L;
	
	int k=0;
	while(p!=NULL && k<i-1){
		p=p->next;	
		k++;
	}
	
	p->next=p->next->next;
	
	free(p->next);
	
	return L;
	
}//DeleteLinkList

int LinkLocItem(LinkList L,int i){
//locate position i in LinkList L
	LinkList p=L->next;
	
	//printf("%d\n",p->next->data);
	//p=p->next;
	int k=1;
	while( p && k<i){
	p=p->next;
	k++;
	}
	int value= p->data;

	return value;
}//LinkLocItem


int LenOfLinkList(LinkList L){
//length of LinkLis without head node
	LinkList p=L->next;
	int k=0;
	
	while(p!=NULL){
	p=p->next;
	k++;
	}
	return k;
}//LenOfLinkList



LinkList CombineTwoLinkList(LinkList a,LinkList b){
//combine two LinkList return pointer hc as the head pointer
//put b behind rear of a
	LinkList tempA=a;
	LinkList tempB=b;
	
	while(tempA->next!=NULL)tempA=tempA->next;
	
	LinkList q=tempB;
	
	tempA->next=q->next;
	
	free(b);
	
	return a;
	
}//CombineTwoLinkList

