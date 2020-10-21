#ifndef _SlinkList_H_
#include <stdio.h>
#include <stdlib.h>
#define EOE -1
typedef int ElemType;
typedef struct node
{
    ElemType data;
    struct node *next;
}node;
typedef node * List;
//List initiList (List L);
//void Insert(ElemType e,List *L);
#endif // _SlinkList_H
