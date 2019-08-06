/*
 * main.c
 *
 *  Created on: Aug 2, 2019
 *      Author: Nour
 */

#include "LinkedList.h"
#include "Arrays.h"

int A[SIZE] = {0};

int
main(void)
{
	printf("Welcome to Linked List Code\n\n");
	InsertAtFirst_LinkedList(10);
	InsertAtLast_LinkedList(70);
	InsertAtFirst_LinkedList(20);
	InsertAtFirst_LinkedList(56);
	InsertAtLast_LinkedList(50);
	Insert_LinkedList(2,4);

	PrintList_LinkedList();
	Reverse_LinkedList();
	PrintList_LinkedList();
	DeletePosition_LinkedList(0);
	PrintList_LinkedList();
	ElementSearchFirst_LinkedList(20);

	int array_size = 0;

	printf("\nWelcome to Array Code\n\n");

	InsertAtLast_Array(4,A,&array_size);
	InsertAtLast_Array(5,A,&array_size);
	InsertAtFirst_Array(8,A,&array_size);
	Insert_Array(2,7,A,&array_size);
	Insert_Array(0,1,A,&array_size);
	Insert_Array(5,1,A,&array_size);

	PrintList_Array(A,array_size);
	Reverse_Array(A,array_size);
	PrintList_Array(A,array_size);
	DeletePosition_Array(1,A,&array_size);
	PrintList_Array(A,array_size);
	DeletePosition_Array(0,A,&array_size);
	PrintList_Array(A,array_size);
	ElementSearchFirst_Array(A,array_size,5);

	return 0;
}
