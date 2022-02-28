//gcc struct.c -o struct.out
//./struct.out
#include <stdio.h>

struct node{
	int data;
	struct node* nextptr;
};
typedef struct node Node;

int main(){
	Node head;
	head.data = 7;
	head.nextptr = NULL;

	printf("\n\tValue %d is stored in address %p \n\n", head.data, &head);
	return 0;
}