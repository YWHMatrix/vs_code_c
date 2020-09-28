#ifndef __SQLISt_H_
#define __SQLIST_H_
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100
#define ElemType int
typedef struct{
    ElemType Data[MAXSIZE];
    int length;
}SqList;
int lnitList (SqList *L);
int GetElem(SqList L,int i);
int LocateElem(SqList L,ElemType e);
int ListInsert(SqList *L,int i,ElemType e);
int ListDelete(SqList *L,int i,ElemType *e);
void PrintList(SqList L);
int  GetLength(SqList L);
void DestroyList(SqList *L);
#endif