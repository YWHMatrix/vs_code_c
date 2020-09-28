#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>
#define MAXNUM 100
#define OVERFLOW 0
typedef int elemtype;
 
typedef struct Sqlist{
    elemtype *elem;//指针域
    int length;
    int LIST_SIZE;
}Seqlist;
void Initialist(Seqlist *l);//初始化线性顺序表
//void ListInsert(Seqlist *l,int i,int e);//插入元素，i为插入元素在表中的位置，e为插入元素的值
void Creatlist(Seqlist *l);//创造一个线性顺序表
void ptlist(Seqlist l);//将线性顺序表的内容打印出来
int main()
{
    Seqlist lb;
    Initialist(&lb);
    Creatlist(&lb);
    ptlist(lb);
    return 0;
}
 
void Initialist(Seqlist *l)//初始化线性顺序表
{
    l->elem=(elemtype *)malloc(MAXNUM*sizeof(elemtype));//分配空间
    if(!l->elem)exit(OVERFLOW);// 分配错误，返回0
    l->LIST_SIZE=MAXNUM;
    l->length=0;
}
void Creatlist(Seqlist *l)
{
    int j;
    j=1;
    printf("请输入顺序表的长度:");
    int head;
    head=l->elem;
    scanf("%d",&l->length);//顺序表的长度,另外顺序表的长度不够时还需扩充
    for(int i=0;i<l->length;i++)
    {
        printf("请输入顺序表的第%d个元素:",j);
        scanf("%d",l->elem);
        l->elem++;
    }
    l->elem=head;//head的作用是不改变l.elem地址
 
}
void ptlist(Seqlist l)//将线性顺序表的内容打印出来
{
    int j;
    j=1;
    for(int i=0;i<l.length;i++)
    {
        printf("第%d个元素：",j);
        printf("%d",l.elem[i]);
        j++;
    }
}