#include <stdio.h>
#include "SlinkList.h"
List  initiList(List* L)
{
	(*L) = (node*)malloc(sizeof(node));
	(*L)->next = NULL;
	return (*L);
}

List CreateListF(List L)//初次头插，不进行判断
{
	node* p;
	int n,e;
	printf("输入要插入元素的个数：");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	   p = malloc(sizeof(struct node));
	   if (!p)exit(EOE);
	   scanf("%d",&e);
	   p->data = e;
	   p->next = L->next;
	   L->next = p;
	}
	return L;
}

List CreateListR(List L) 
{
	node *p;
	p=(node*)malloc(sizeof(node));//创造一个指针始终指向表尾，除初次
	L= p;
	node *q;
	int  n,e;
	printf("请输入要插入元素的个数：");
	scanf("%d",&n);
	for (int  i = 0; i < n; i++)
	{
	q=(node *)malloc(sizeof(node));
	q->data=e;
	p->next=q;
	p=q;
	}
	p->next=NULL;
	return L;
}
void printfList(List L)
{
	node *p;
	p=L->next;
	while (p!=NULL)
	{
		printf("%d",p->data);
		p=p->next;
	}
	

}

int main() {
	List L;
	initiList(&L);
	CreateListF(L);
	printfList(L);
	
	return 0;
}