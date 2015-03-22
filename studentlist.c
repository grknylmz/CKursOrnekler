#include "studentlist.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <nutility.h>


typedef struct _Node{
	
	Student s;
	struct _Node *pnext;
	
	
}Node;



static Node *pFirst = NULL;
static int count = 0;

void displayList(){
	Node *p;
	
	for(p = pFirst ; p != NULL ; p = p-> pnext ){
		displayStudent(p->s);
		sl();
		
	}
}

int isEmpty(){
	return count == 0;
}

int getSize(){
	return count;
	
}


void front(){
	if(isEmpty)
		exit(EXIT_FAILURE);
	
	*ptr = pFirst  -> s;
}


void pushFront(const Student *p){
	Node *pd = (Node * )malloc(sizeof(Node) );
	if(pd == NULL){
		printf("Bellek YETERSİZ");
		exit(EXIT_FAILURE);
	}
	
	pd->pnext = pfirst;
	pfirst = pd;
	count++;
	
}

void popFront(void){
	Node *ptemp;
	
	
	
	if(isEmpty)
		exit(EXIT_FAILURE);
	
	
	ptemp = pfirst;
	pfirst = pfirst ->pnext;
	free(ptemp);
	--count;
	
}


 void makeEmpty(){
	 while(!isEmpty)
		 popFront();
	 
 }

































