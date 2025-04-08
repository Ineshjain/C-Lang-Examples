#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;
};
void lld_traversal(struct node *ptr){
  int i=0;
  while(ptr!=NULL)
  {
  printf("ELEMENT %d IS:%d\n",i+1,ptr->data);
  ptr=ptr->link;
    i++;
  }
}
main()
{
struct node *head,*second,*third, *fourth;;
  head=(struct node*)malloc(sizeof(struct node));
  second=(struct node*)malloc(sizeof(struct node));
  third=(struct node*)malloc(sizeof(struct node));
  fourth=(struct node*)malloc(sizeof(struct node));
  head ->data=7;
  head->link=second;
  second->data=99;
  second->link=third;
  third->data=52;
  third->link=fourth;
  fourth->data=67;
  fourth->link=NULL;
  lld_traversal(head);
}
