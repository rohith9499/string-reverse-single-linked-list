#include"common.h"
int reverse_string(slist *head)
{
	if(head == NULL)
		return FAILURE;
	reverse_string(head->link);
	printf("%c",head->data);
}
