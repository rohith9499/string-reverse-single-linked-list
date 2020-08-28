#include "common.h"

int main(int argc, char *argv[])
{

slist *head=NULL;
char *temp=argv[1];

printf("enter string: %s\n",argv[1]);

//check for string enter 	
if (argc < 2)
	{
		printf("enter the string to reverse\n");
		return -1;
	}

//spliting of string into character and add elements to linked list 
while(*temp)
	{
		if(insert_data(*temp,&head) == FAILURE)
			{
				printf("unable to add elements to list");
				break;
			}
		temp++;
	}

//reverse print of string
printf("reverse of string: ");
reverse_string(head);
printf("\n");
}
