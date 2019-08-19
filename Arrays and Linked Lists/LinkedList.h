/*
 * LinkedList.h
 *
 *  Created on: Aug 2, 2019
 *      Author: Nour
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
   int data;
   struct node *next;
}node;

extern void InsertAtFirst_LinkedList(int data);
extern void InsertAtLast_LinkedList(int data);
extern void Insert_LinkedList(int position,int data);
extern void PrintList_LinkedList(void);
extern void ElementSearchFirst_LinkedList(int element);
extern void Reverse_LinkedList(void);
extern void DeletePosition_LinkedList(int position);
int CalculateSize_LinkedList(void);

#endif /* LINKEDLIST_H_ */
