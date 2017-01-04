#include <stdio.h>
#include <stdlib.h>

typedef char Value;
typedef int Key;

typedef struct entry{
	Key k;
	Value v;
	struct entry* next;
}entry;

entry* newentry(p,x){
	entry* temp = (entry*)malloc(sizeof(entry));
	temp->v = x;
	temp->k = p;
	temp->next = NULL;
	return temp;
}
