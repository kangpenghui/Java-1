//顺序栈基本操作集
/*============================================================================*/
#ifndef _SEQSTACK_H_
#define _SEQSTACK_H_

#include<stdio.h>
#include<malloc.h>

//顺序栈最大存储容量
#define SeqStackMAXSIZE 256

typedef struct
{
	int s;			//存储数据
	int t;			//标识数据、为运算符标示级别，为>0是运算符，为0是数据
}SeqStackData;

//顺序栈结构定义
typedef struct SeqStack
{
	SeqStackData Data[SeqStackMAXSIZE];
	int top;
}SeqStack;

/*=========================================================================
*操作：创建顺序栈
*结果：返回创建的顺序栈的地址
=========================================================================*/
SeqStack* Init_SeqStack(void);

/*=========================================================================
*操作：判断顺序栈是否为空
*形参：p为顺序栈的地址
*结果：为空返回1，不为空返回0，地址为NULL返回-1
=========================================================================*/
int Empty_SeqStack(SeqStack* p);

/*=========================================================================
*操作：顺序栈入栈
*形参：p为顺序栈的地址，Data为存入的元素
*结果：成功返回1，失败返回0
=========================================================================*/
int Push_SeqStack(SeqStack* p, SeqStackData Data);

/*=========================================================================
*操作：顺序栈出栈
*形参：p为顺序栈的地址，Data为栈顶元素存储的地址
*结果：成功返回1，失败返回0
=========================================================================*/
int Pop_SeqStack(SeqStack* p, SeqStackData* Data);

/*=========================================================================
*操作：取顺序栈栈顶元素
*形参：p为顺序栈的地址，Data为栈顶元素存储的地址
*结果：成功返回1，失败返回0
=========================================================================*/
int GetTop_SeqStack(SeqStack* p, SeqStackData* Data);

/*=========================================================================
*操作：测量顺序栈的长度（貌似并没有什么用）
*形参：p为顺序栈的地址
*结果：返回顺序栈的长度，失败返回-1
=========================================================================*/
int Length_SeqStack(SeqStack* p);

/*=========================================================================
*操作：清空顺序栈
*形参：p为顺序栈的地址
*结果：成功返回1，失败返回0
=========================================================================*/
int Clear_SeqStack(SeqStack* p);


/*=========================================================================
*操作：销毁顺序栈
*形参：p为顺序栈的地址
=========================================================================*/
void Destroy_SeqStack(SeqStack* p);

#endif