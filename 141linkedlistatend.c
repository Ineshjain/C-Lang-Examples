#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
int data;
struct node *next;
};
void atend(struct node *head,int data)
{
  struct node *ptr,*temp;
  ptr=head;
  temp=(struct node *)malloc(sizeof(struct node));

  temp ->data=data;
  temp ->next=NULL;
  while(ptr->next!=NULL)
  {
    ptr=ptr->next;
  }
  ptr ->next=temp;
  printf("Element inserted at end\n");
  printf("%d",temp->data);
}

int main()
{
  struct node *head;
  int data;
  //printf("ENTER A NUMBER TO BE INSERTED AT END:");
  //scanf("%d",&data);
  atend(head,56);
  atend(head,99);
  atend(head,6);

}
