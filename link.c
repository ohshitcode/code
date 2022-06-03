#include <stdio.h>
#include <stdlib.h>

int main(){
typedef struct _NODE{
   int id;
   struct _NODE *next;	
}Node ,*link;

link head = NULL;
link now = NULL;

link link_new(){
	link head = NULL;
	head = (Node*)malloc(sizeof(Node));
	head->id = 0;
	head->next = head;
	return head;
}

head = link_new();
now = (Node*)malloc(sizeof(Node));
now  = head;
head->next  = now;
now->next = head;

link insert(int _id){
// new mode and insert it;
	
 link node1 = NULL;
 node1 = (Node*)malloc(sizeof(Node));
	node1->id = _id;
	node1->next = NULL;
	now->next = node1;
	node1->next = head;
}

int x;
for(x = 0; x<5;x++){
	insert(x);
	printf("the No.  %d node \n",x);
}

now = head;

printf("Start now:head id :%d\n",now->id);

}
