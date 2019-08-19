/*
 * Arrays.h
 *
 *  Created on: Aug 2, 2019
 *      Author: Nour
 */

#ifndef ARRAYS_H_
#define ARRAYS_H_

#define SIZE	(int)20

#include <stdio.h>
#include <stdlib.h>

extern void InsertAtFirst_Array(int data,int *A,int *size);
extern void InsertAtLast_Array(int data,int *A,int *size);
extern void Insert_Array(int position,int data,int *A,int *size);
extern void PrintList_Array(int *A,int size);
extern void ElementSearchFirst_Array(int *A,int size,int element);
extern void Reverse_Array(int *A,int size);
extern void DeletePosition_Array(int position,int *A,int *size);

#endif /* ARRAYS_H_ */
