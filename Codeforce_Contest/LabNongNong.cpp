#include <stdio.h>
#include <stdlib.h>
#define andBit(a,b) {printf("%d & %d = %d\n",a,b,a & b);}// add your code
typedef struct Node {
 int data;
 struct Node* next;
}node;
void PlusMatrix()
{
	int n;
	printf("Please input n: ");
	scanf("%d",&n);
	int mat_a[n][n];
	int mat_b[n][n];
	int i,j;
	printf("Matrix A:\n");
	for(i = 0 ; i < n;i++){
		for(j = 0; j < n;j++){
			scanf("%d",&mat_a[i][j]);
		}
	}
	printf("Matrix B:\n");
	for(i = 0 ; i < n;i++){
		for(j = 0; j < n;j++){
			scanf("%d",&mat_b[i][j]);
		}
	}

	printf("Matrix A + Matrix B:\n");
	for(i = 0 ; i < n;i++){
		for(j = 0; j < n;j++){
			printf("%d ",mat_a[i][j] + mat_b[i][j]);
		}
		printf("\n");
	}
}

void addList(node** head, int num)
{
	Node *new_node = (Node *)malloc(sizeof(Node));
	new_node->data = num;
	new_node->next = NULL;
	*head = new_node;
//	if (*head == NULL) {
//		*head = new_node;
//	} else {
//		Node *last = *head;
//		while (last->next != NULL) {
//		last = last->next;
//	}
//	last->next = new_node;
//	}
}
int main()
{
	int ch, a, b;
	node* head;
	while(1){
		printf("menu\n");
		printf("1) Matrix + Matrix\n");
		printf("2) LinkList\n");
		printf("3) Bitwise and Macro\n");
		printf("0) Exit\n");
		printf("choose: ");
		scanf("%d", &ch);
	 	switch(ch){
			case 1: PlusMatrix();
			break;
			case 2: addList(&head, 10);
			printf("%d\n", head->data);
			break;
			case 3: printf("Input a and b: ");
			scanf("%d %d", &a, &b);
			andBit(a, b);
			break;
			case 0: exit(EXIT_SUCCESS);
	 	}
	printf("----------------------------\n");
	}
}

