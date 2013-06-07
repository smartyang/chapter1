typedef struct LNode{
	int data;
	struct LNode * next;
}LNode, *LinkList;



//create linkList form pointer L
LinkList CreateLinkListFromLast(LinkList L,int n);

//print all value in LinkList
Statue PrintValueInLinkList(LinkList L);

//insert value in LinkList, and return head pointer
LinkList InsertInLinkList(LinkList L,int i, int value);

//dele element i in LinkList
LinkList DeleteLinkList(LinkList L,int i);

//locate i in LinkList L
int LinkLocItem(LinkList L,int i);

//the length of LinkList without the head point 
int LenOfLinkList(LinkList L);

//combine two LinkList return pointer hc as the head pointer
LinkList CombineTwoLinkList(LinkList a,LinkList b);

