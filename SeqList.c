#pragma once

#include "SeqList.h"


void SeqListInit(SL*ps)
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SeqListPushBack(SL* ps, SLDataType x)
{
	//  ���û�пռ�(0��)��ռ䲻��(����)
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		//  ��Ŀ������ �Ƿ����0���Ǹ�4�������2��ԭ�ռ�
		SLDataType* tmp = (SLDataType * )realloc(ps->a, sizeof(SLDataType) * newcapacity);
		//	���ٿռ�
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;	//	���ٵĿռ���ṹ��
		ps->capacity = newcapacity;// ���ٵĴ�С��ԭ��С
	}
	ps->a[ps->size] = x; // Ҫ����ֵ���ṹ��
	ps->size++;
}


void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);