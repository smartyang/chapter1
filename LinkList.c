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
		//scanf(p->data);
		p->data=1;
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
