/*
 * Binary_Search.h
 *
 *  Created on: Dec 19, 2019
 *      Author: Nour
 */

#ifndef BINARY_SEARCH_H_
#define BINARY_SEARCH_H_

extern int BinarySearch(int *A,int size,int element);
extern int BinaryCircularArraySearch(int *A,int size,int element);
extern int BinarySearchFindFirst(int *A,int size,int element);
extern int BinarySearchFindLast(int *A,int size,int element);
extern int BinarySearchFindCount(int *A,int size,int element);
extern int BinarySearchFindRotationCount(int *A,int size);

#endif /* BINARY_SEARCH_H_ */
