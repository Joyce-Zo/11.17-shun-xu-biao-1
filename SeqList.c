#pragma once

#include "SeqList.h"


void SeqListInit(SL*ps)
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SeqListPushBack(SL* ps, SLDataType x)
{
	//  如果没有空间(0个)或空间不足(满了)
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		//  三目操作符 是否等于0，是给4，否则给2倍原空间
		SLDataType* tmp = (SLDataType * )realloc(ps->a, sizeof(SLDataType) * newcapacity);
		//	开辟空间
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;	//	开辟的空间给结构体
		ps->capacity = newcapacity;// 开辟的大小给原大小
	}
	ps->a[ps->size] = x; // 要传的值给结构体
	ps->size++;
}


void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);