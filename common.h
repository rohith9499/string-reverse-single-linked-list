#ifndef COMMON_H
#define COMMON_H
#define SUCCESS 0
#define FAILURE -1

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	char data;
	struct node *link;
}slist;

int insert_data( char data,slist **head);
int reverse_string(slist *head);
#endif

