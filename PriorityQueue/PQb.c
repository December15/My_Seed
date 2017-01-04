#include "pQueueHeaders.h"

//      Make the struct of priority_queue.
typedef struct {
	int size;
	entry* front;
}PQ;

//      Assign the memory for PQ.
//	Initialze size and front.
PQ* init_PQ(){
	PQ* temp = (PQ*)malloc(sizeof(PQ));
	temp->size = 0;
	temp->front = NULL;
	return temp;
}

//	Get key of front that has the prirorty key.
Key getKey(PQ* pq){
	return pq->front->key;
}

//	The lagest key is front.
void insert(PQ* pq,Key k,Value v){
	if(pq->size == 0){
		pq->front = newenrty(k,v);
		pq->size += 1;
	}
	else{
		int tempkey = getKey(pq);	//Present key is stored tempkey.
		entry* temp = pq->front;
		if(k>=tempkey){
			pq->front = newentry(k,v);
			pq->front->next = temp;
			pq->size += 1;
		}
		else{
			while(temp->next != NULL){
				temp = temp->next;
			}
			temp->next = newentry(k,v);
			pq->size += 1;
		}
	}
}
