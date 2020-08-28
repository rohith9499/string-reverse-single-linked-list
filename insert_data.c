#include"common.h"

int insert_data(char data,slist **head)
{
	slist *new,*temp,*temp_1;
//	printf("%c",data);
	new=malloc(sizeof(slist));
	
	//checking for memory allocated or not
	if(new == NULL)
		return 0;

	new->data = data;
	new->link = NULL;

	//checking if head is null ,else add new data
	if(*head == NULL)
	{
		*head = new;
		return SUCCESS;
	}

	//adding remaining elements
	temp = *head;
	while(temp->link != NULL)
	{
		temp = temp->link;
	}
	temp->link = new;
	//printf("%c",temp->data);
	
	return SUCCESS;
}




