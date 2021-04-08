#include<stdio.h> 
#include<stdlib.h>
int len =0;
typedef struct Lnode {
    int val;
    struct Lnode*next;
} MyLinkedList;

/** Initialize your data structure here. */

MyLinkedList*  myLinkedListCreate() {
    MyLinkedList* head = (MyLinkedList*)malloc(sizeof( MyLinkedList ));
    head->val = -1;
    head->next =NULL;
    return head;
}

/** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
int myLinkedListGet(MyLinkedList* obj, int index) {
    int i =0;
    MyLinkedList* p ;
    p = obj->next;
    for(int i=0;i<index;i++){
        if(p->next ==NULL){return -1;}
        p=p->next;
    }
    return p->val;
}

/** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
    MyLinkedList* head =  (MyLinkedList*)malloc(sizeof(MyLinkedList));
    head->val = val;
    head->next = obj->next;
    obj->next = head;
    len++;
}

/** Append a node of value val to the last element of the linked list. */
void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
    MyLinkedList* tail =  (MyLinkedList*)malloc(sizeof(MyLinkedList));
    MyLinkedList*p = obj;
    while(p->next){
    	p = p->next;
	}
    tail->val = val;
    tail->next = NULL;
    p->next = tail;
    len++;
}

/** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
	if(index <0 ){
		myLinkedListAddAtHead(obj, val);
	}
	
	else if(index>len){
		return;
	}
	else if(index == len){
		myLinkedListAddAtTail(obj, val);
	}
	else{
		MyLinkedList* head =  (MyLinkedList*)malloc(sizeof(MyLinkedList));
	    MyLinkedList* p = obj;
	    head->val = val;
	    for(int i=0;i<index;i++){
	        p = p->next;
    	}

	    head->next = p->next;
	    p->next = head;
		
		len++;
	}
}

/** Delete the index-th node in the linked list, if the index is valid. */
void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
		MyLinkedList* p = obj;
	MyLinkedList* tmp;
	if(index<0 || index>len-1){
		return;
	}
	for(int i =0;i<index;i++){
		p= p->next;
	}
    
    tmp = p->next;
    if( !tmp ) {//²ÙÄã´óÒ¯¿ÓÎÒºÃ¾Ã
        p->next = NULL;
    }else{
        p->next = tmp->next;
    }
	free(tmp);
	len--;
}



void myLinkedListFree(MyLinkedList* obj) {
    MyLinkedList* p;
    MyLinkedList* tmp;
    p = obj->next;
    obj->next =NULL;
    while( p != NULL){ 
        tmp = p->next;
        free(p);
        p=tmp;
    }
}
int main(){
	
	MyLinkedList* obj = myLinkedListCreate();
	//11
	myLinkedListAddAtHead(obj, 2);
	myLinkedListDeleteAtIndex(obj,1);
	myLinkedListAddAtHead(obj, 2);
	myLinkedListAddAtHead(obj, 7);
	myLinkedListAddAtHead(obj, 3);
	myLinkedListAddAtHead(obj, 2);
	myLinkedListAddAtHead(obj, 5);
	myLinkedListAddAtTail(obj, 5);
	int a= myLinkedListGet(obj, 5);
	myLinkedListDeleteAtIndex(obj,6);
	myLinkedListDeleteAtIndex(obj,4);
	
	MyLinkedList*p = obj->next;
	while( p ){
		printf("%d ",p->val);
		p = p->next;
	}
	
	
	
	return 0;
}

/**
 * Your MyLinkedList struct will be instantiated and called as such:
 * MyLinkedList* obj = myLinkedListCreate();
 * int param_1 = myLinkedListGet(obj, index);
 
 * myLinkedListAddAtHead(obj, val);
 
 * myLinkedListAddAtTail(obj, val);
 
 * myLinkedListAddAtIndex(obj, index, val);
 
 * myLinkedListDeleteAtIndex(obj, index);
 
 * myLinkedListFree(obj);
*/
