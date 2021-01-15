#include<stdio.h>
#include<stdlib.h>

#define M 5

void insert(int);
void delete(int);
void create();
void check(int);
void display();

int que[M];
int front, rear;

int main(){
	
	int n,ch;
	
	printf("\n1 : Insert element");
	printf("\n2 : Delete element");
	printf("\n3 : Display element");
	printf("\n4 : Exit()");
	
	create();
	
	while(1) {
		
		printf("\nEnter a choice : ");
		scanf("%d",&ch);
		
		switch(ch) {
			case 1 : printf("Enter value to insert : ");
					 scanf("%d",&n);
					 insert(n);
					 break;
			case 2 : printf("Ente value to delete : ");
					 scanf("%d",&n);
					 delete(n);
					 break;
			case 3 : display();
					 break;
			case 4 : exit(0);
			
			default:
					 printf("\nInvalid choice !");	
		}
		
		
	}	
	
	return 0;
}

void create(){
	front = rear = -1;
}

void insert(int data) {
	if (rear >= M-1) {
		printf("Queue overflow ");
		return;
	}
	if( (front == -1) && (rear == -1)) {
		front++;
		rear++;
		que[rear] = data;
		return;
	}
	else{
		check(data);
	}
	rear++;
}

void check(int data) {
	int i,j;
	
	for(i=0; i<=rear; i++) {
		if(data >= que[i]) {
			for(j=rear+1; j>i; j--) {
				que[j] = que[j-1];
			}
			que[i] = data;
			return;
		}
	}
	que[i] = data;
}



void delete(int data) {
	int i;
	if((front==-1) && (rear==-1)) {
		printf("\nQueue is empty !");
		return;
	}
	
	for(i=0; i<=rear; i++) {
		if(data == que[i]) {
			for(; i<rear; i++) {
				que[i] = que[i+1];
			}
		que[i] = -99;
		rear--;
		
		if(rear == -1){
			front = -1;
		}
		return;
		}
	}
	printf("%d not in queue ", data);
}

void display(){
	if((front == -1) && (rear == -1)) {
		printf("\n Queue is empty ");
		return;
	}
	
	for(; front <=rear; front++) {
		printf("%d ", que[front]);
	}
	front = 0;
	
}




