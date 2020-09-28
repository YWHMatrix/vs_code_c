#include <stdio.h>
#include "SqList.h"
int main()
{
    SqList L; 
    printf("===========请输入您的选择=============\n");
    printf("1.初始化顺序表\t\t 2.查找(按位置查找)元素\t\t 3.查找（按值查找）元素\n");
    printf("4.插入操作( 1<=i<=L.length+1 )\t\t 5.删除操作(1<=i<=L.length)\t\t 6.输出所有元素\n");
	printf("7.销毁顺序表\t\t 8.求表的域值\t\t0.结束退出\n");
    char c;
    while (1){
    	scanf("%c",&c);
        if(c=='1'){
            InitList(&L); 
            printf("初始化成功\n");     	
		}else if(c=='2'){
			int i;
	    	printf("请输入您要查询的元素位置:\n");
	    	scanf("%d",&i);
	    	int a=GetElem(L,i);
	    	printf("%d\n",a);			
		}else if(c=='3'){
			int e;
			printf("请输入您要查询的元素值:\n");
			scanf("%d\n",&e);		
			int a=LocateElem(L,e);
			printf("%d\n",a);
		}else if(c=='4') {
            int e;
            char d='n';
            int i=1;
            while(d=='n'){
	            printf("请输入您要添加的元素:\n");
	            scanf("%d",&e);
	            ListInsert(&L,i,e);
	            printf("添加成功\n");
	            i++;
	            printf("是否停止添加元素n/y:\n");
				scanf("%s",&d);
			}
		}else if(c=='5'){
			
			int i=0;
			printf("请输入您要删除第几个位置:\n");
			scanf("%d",&i);
			int e;
			ListDelete(&L,i,&e);
			printf("%d\n",e);
		}else if(c=='6'){
			PrintList(L);
		}else if(c=='7'){
			DestroyList(&L);
		}else if (c=='8')
		{
			printf("顺序表的长度：%d\n",GetLength(L));
		}else if (c=='0')
		{
			break;
		}
	}
	printf("退出\n"); 
    return 0;
}