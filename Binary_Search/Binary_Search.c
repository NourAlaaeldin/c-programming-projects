/*
 * Binary_Search.c
 *
 *  Created on: Dec 19, 2019
 *      Author: Nour
 */

#include "Binary_Search.h"

/* Search for an element using binary search */
int
BinarySearch(int *A,int size,int element)
{
	int low = 0,high = size - 1;
	int mid;

	while(low <= high)
	{
		mid = (low + high) / 2;
		if(element == A[mid])
			return mid; /* the element is in the middle */
		else if(element < A[mid])
			high = mid - 1; /* element is found before the middle */
		else
			low = mid + 1; /* element is found after the middle */
	}
	return -1; /* element dosen't exist in the array */
}

int
BinaryCircularArraySearch(int *A,int size,int element)
{
	int low = 0,high = size - 1;
	int mid;
	while(low <= high)
	{
		mid = (low + high) / 2;
		if(element == A[mid])
			return mid; /* the element is in the middle */
		if(A[mid] <= A[high]) /* right half is sorted */
		{
			if(element > A[mid] && element <= A[high])
				low = mid + 1; /* search in the right */
			else
				high = mid - 1;
		}
		else /* left half is sorted */
		{
			if(element >= A[low] && element < A[mid])
				high = mid - 1; /* search in the left */
			else
				low = mid + 1;
		}
	}
	return -1;
}

/* Search for occurrence of element first using binary search */
int
BinarySearchFindFirst(int *A,int size,int element)
{
	int low = 0,high = size - 1;
	int result = -1;
	int mid;

	while(low <= high)
	{
		mid = (low + high) / 2;
		if(element == A[mid])
		{
			result = mid;
			high = mid - 1;
		}
		else if(element < A[mid])
			high = mid - 1; /* element is found before the middle */
		else
			low = mid + 1; /* element is found after the middle */
	}
	return result; /* element dosen't exist in the array */
}

/* Search for occurrence of element last using binary search */
int
BinarySearchFindLast(int *A,int size,int element)
{
	int low = 0,high = size - 1;
	int result = -1;
	int mid;

	while(low <= high)
	{
		mid = (low + high) / 2;
		if(element == A[mid])
		{
			result = mid;
			low = mid + 1;
		}
		else if(element < A[mid])
			high = mid - 1; /* element is found before the middle */
		else
			low = mid + 1; /* element is found after the middle */
	}
	return result; /* element dosen't exist in the array */
}

/* find repetition of an element in a sorted array */
int
BinarySearchFindCount(int *A,int size,int element)
{
	int first = BinarySearchFindFirst(A,size,element);
	int last = BinarySearchFindLast(A,size,element);
	if(first == -1)
		return 0; /* element is not found */
	else
		return ((last - first) + 1);
}

/* find repetition of an element in a circularly sorted array */
int
BinarySearchFindRotationCount(int *A,int size)
{
	int low = 0,high = size - 1;
	int mid,prev;
	while(low <= high)
	{
		if(A[low] <= A[high]) /* Check if the array is already sorted */
			return low;

		/* calculate middle & previous elements */
		mid  = (low + high) /2;
		prev = (mid + size - 1) % size;

		/* This is the pivot element */
		if(A[mid] <= A[prev])
			return mid;
		else if(A[mid] <= A[high])
			high = mid - 1;
		else if(A[mid] >= A[low])
			low = mid + 1;
	}
	return -1;
}
