#pragma once

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>

//#define N 1000
//typedef int SLDataType;	// �Ժ���Ҫ�洢��ͬ���͵����ݣ�����ֱ���޸�
//
////	��̬˳���
//typedef struct SeqList
//{
//	SLDataType a[N];
//	int size; // ��ʾ�����д洢�˶��ٸ�����
//}SL;
//
////	�ӿں��� - �������Ǹ���STL���
//void SeqListInit(SL* ps);	//	��ʼ������
////	��̬��������С�򲻹��ã��������˷ѿռ�
//void SeqListPushBack(SL* ps, SLDataType x);	//β��
//void SeqListPopBack(SL* ps);				//βɾ
//void SeqListPushFront(SL* ps, SLDataType x);//ͷ��
//void SeqListPopFront(SL* ps);				//ͷɾ
//
//


typedef int SLDataType;	

//	��̬˳���
typedef struct SeqList
{
	SLDataType* a;
	int size; 
	int capacity;	// ����ʵ���ܴ洢�Ŀռ������Ƕ��ٸ�
}SL;


void SeqListInit(SL *ps);	// �β� ��ʵ�ε���ʱ����������Ӱ��ʵ�� - ��ֵ����
	//	       ���Դ���ַ
void SeqListPushBack(SL* ps, SLDataType x);	
void SeqListPopBack(SL* ps);				
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);				
