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

