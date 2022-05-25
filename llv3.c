#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct node
	{
		int data;
		struct node *next;
	};
	struct node *head=NULL,*pos=NULL,*tail=NULL;
	int ch,entry,count=0,position=0,num;
	while(1)
	{
		printf("\n 1.Insert\n 2.Display\n 3.Count\n 4.Search\n 5.Delete\n 6.Exit");
		printf("\n Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				printf("\n Enter Data:");
				scanf("%d",&entry);
				if(head==NULL)
				{
					head=(struct node *)malloc(sizeof(struct node));
					head->data=entry;
					pos=head;
					tail=head;
				}
				else
				{
					tail->next=(struct node *)malloc(sizeof(struct node));
					tail=tail->next;
					tail->data=entry;
				}break;
			}
			case 2:
			{
				pos=head;
				printf("\n Elements are:");
				while(pos!=NULL)
				{
					printf("\t %d",pos->data);
					pos=pos->next;
				}break;
			}
			case 3:
			{
				pos=head;
				while(pos!=NULL)
				{
					count++;
					pos=pos->next;
				}
                                printf("Number of elements is %d",count);
			break;
			}
			case 4:
			{
				printf("enter the element to be searched\n");
				scanf("%d",&num);
			
				pos=head;
				while(pos!=	NULL)
				{
					if(num==pos->data)
					{
						printf("element found at position %d\n",position+1);
					}
					position++;
					pos=pos->next;
				}
		        break;			
		        }
		        case 5:
		        {
				struct node *temp=head;
				printf("\n Enter position of data:");
				scanf("%d",&entry);
				if(entry==0)
				{
					head=head->next;
					temp->next=NULL;
					free(temp);
				}
				else
				{
					for(int i=0;i<entry-1;i++)
					{
						temp=temp->next;
					}
					struct node *del=temp->next;
					temp->next=temp->next->next;
					del->next=NULL;
					free(del);

		       		}

	                break;
			}
			case 6:
		        {
				printf("\n good bye");
				exit(0);
			}

	      }
	}
}
