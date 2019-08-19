/*
 * LinkedList.c
 *
 *  Created on: Aug 2, 2019
 *      Author: Nour
 */

#include "LinkedList.h"

node *head = NULL;
node *current = NULL;
node *prev = NULL;

/* insert link at the beginning of the list */
void
InsertAtFirst_LinkedList(int data)
{
   /* create a new node */
   node *temp = (node*) malloc(sizeof(node));

   /* store data in the node */
   temp -> data = data;

   /* point the next pointer to the old head node */
   temp -> next = head;

   /* point the head to the new first node */
   head = temp;
}

void
InsertAtLast_LinkedList(int data)
{
   /* allocate memory for new node */
	node *temp = (node*) malloc(sizeof(node));

   /* insert the data to the new node and make the next point to null */
   temp -> data = data;
   temp -> next = NULL;

   /* if head is empty, create new list */
   if(head == NULL)
   {
      head = temp;
      return;
   }

   /* start from the first node */
   current = head;

   /* loop until reach the last node in the old list */
   while(current->next != NULL)
   {
	   /* go to the next node */
	   current = current->next;
   }

   /* Make the last node in the old list point to new node */
   current->next = temp;
}

void
Insert_LinkedList(int position,int data)
{
	int size = CalculateSize_LinkedList();

	if(position > size)
	{
		printf("You entered a wrong position\n");
		return;
	}

	/* allocate memory for new node */
	node *temp = (node*)malloc(sizeof(node));

	/* insert the data to the new node and make the next point to null */
	temp -> data = data;
	temp -> next = NULL;

	/* insertion is at first position */
	if(position == 0)
	{
		/* the new node will point to the head */
		temp -> next = head;

		/* adjusting the position of the head pointer */
		head = temp;

		/* exit the function */
		return;
	}
	else
	{
		/* start from the first node */
		current = head;

		/* reach the node just before the position */
		/* i = 1 because we start at position 1 */
		for (int i = 1;i < position;i++)
		{
			/* traversing through the list till the node before the position */
			current = current -> next;
		}
		/* set the next pointer to the pointer that the previous node was pointing at */
		temp -> next = current -> next;

		/* make the current node points to the temp node */
		current -> next = temp;
	}
}

void
ElementSearchFirst_LinkedList(int element)
{
	/* initializing the position to be 0 */
   int pos = 0;

   /* check if we have a linked list */
   if(head == NULL)
   {
      printf("Linked List is empty");
      return;
   }

   /* start from the first node */
   current = head;

   /* loop until the last element in the linked list */
   while(current != NULL)
   {
	   /* check if the element is found at the current node */
      if(current -> data == element)
      {
         printf("Element %d is found at index: %d\n",element, pos);
         return;
      }
      /* traverse to the next node */
      current = current -> next;
      pos++;
   }
   /* the code gets here if there is no match */
   printf("There is no match\n");
}

/* display the list */
void
PrintList_LinkedList(void)
{
	/* check if we have a linked list */
	if(head == NULL)
	{
		printf("Linked List is empty");
	    return;
	}

	/* start from the first node */
	current = head;

	printf("Printing the LinkedList\n");

	/* start looping from the head until the last node */
	while(current != NULL)
	{
		printf("%d ",current->data);
	    current = current->next;
	}
	printf("\n");
}

int
CalculateSize_LinkedList(void)
{
	int size = 0;

	/* check if we have a linked list */
	if(head == NULL)
	{
		printf("Linked List is empty");
	    return size;
	}

	/* start from the first node */
	current = head;

	/* start looping from the head till the last node */
	while(current != NULL)
	{
	    current = current->next;
	    size++;
	}
	return size;
}

void
Reverse_LinkedList(void)
{
	/* check if we have a linked list */
	if(head == NULL)
	{
		printf("Linked List is empty");
	    return;
	}

	printf("Reversing the linked list\n");

	/* create a new node pointer */
	node *next;

	/* start from the first node */
	current = head;

	/* loop until the last node */
	while(current != NULL)
	{
		/* store the address of the next node */
		next = current -> next;

		/* set the next node as the previous one */
		current -> next = prev;

		/* move prev to current */
		prev = current;

		/* move current to next */
		current = next;
	}
	/* after reversing, head now points to the previous node */
	head = prev;
}

void
DeletePosition_LinkedList(int position)
{
	int size = CalculateSize_LinkedList();

	if(position > size)
	{
		printf("You entered a wrong position\n");
		return;
	}

	/* check if we have a linked list */
	if(head == NULL)
	{
		printf("Linked List is empty");
	    return;
	}

	printf("Deleting the element at position: %d\n",position);

	/* start from the first node */
	current = head;

	/* create a pointer to node */
	node *delete_ptr;

	/* if we want to delete the first node */
	if(position == 0)
	{
		/* move the head to the next node */
		head = current -> next;

		/* the current node will be deleted */
		delete_ptr = current;

		/* free the memory */
		free(delete_ptr);

		/* exit the function */
		return;
	}

	/* reach the node just before the position */
	/* i = 1 because we start at position 1 */
	for(int i = 1; i < position;i++)
	{
		/* traversing through the linked list */
		current = current -> next;
	}
	/* the next node to the current one will be deleted */
	delete_ptr = current -> next;

	/* the current node points now to where the deleted node was pointing at */
	current -> next = delete_ptr -> next;

	/* free the memory */
	free(delete_ptr);
}
