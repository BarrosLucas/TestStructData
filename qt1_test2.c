#include <stdio.h>
#include <stdlib.h>


struct Node {
	char value;
	struct Node *next;
};

void remove2(struct Node **p){
	struct Node *aux = NULL;
	while(p){
		aux = (*p)->next;
		free(*p);
		p = aux;
	}
	p = NULL;
}

void Append(struct Node **node, int value){
	if(!*node){
		//printf("1\n");
		*node = (struct Node*) malloc(sizeof(struct Node));
		(*node)->value = value;
		(*node)->next = NULL;
	}else{
		//printf("2\n");
		struct Node *outroNode = *node;
		while(outroNode->next){
			outroNode = outroNode->next;
			//printf("teste");
		}
		outroNode->next = (struct Node*) malloc(sizeof(struct Node));
		outroNode->next->value = value;
		outroNode->next->next = NULL;
	}
}

void Prepend(struct Node **node, int value){
	if(!*node){
		*node = (struct Node*) malloc(sizeof(struct Node));
		(*node)->value = value;
		(*node)->next = NULL;
	}else{
		struct Node* outroNode = (struct Node*) malloc(sizeof(struct Node));
		outroNode->value = value;
		outroNode->next = *node;
		*node = outroNode;
	}
}



void printList(struct Node **node){
	if(!*node){
		printf("Lista vazia\n");
	}else{
		struct Node *aux = (*node);
		do{
			printf("%c ",aux->value);
			aux = aux->next;
		}while(aux->next);
		printf("%c ",aux->value);
	}
}

void Merge(struct Node* l1, struct Node* l2){
	struct Node *listaResultante = NULL;
	while(l1 || l2){
		if(l1){
			Append(&listaResultante,l1->value);
			l1 = l1->next;
		}
		if(l2){
			Append(&listaResultante,l2->value);
			l2 = l2->next;
		}
	}
	
	printList(&listaResultante);
}

int main(){
	struct Node* L = NULL;
	struct Node* D = NULL;	
	
	Append(&L,'L');
	Append(&L,'U');
	Append(&L,'C');
	Append(&L,'A');
	Append(&L,'S');
	
	Append(&D,'D');
	Append(&D,'A');
	Append(&D,'N');
	Append(&D,'I');
	Append(&D,'E');
	Append(&D,'L');
	Append(&D,'Z');
	Append(&D,'Z');
	Append(&D,'Z');
	
		
	printList(&L);
	printf("\n");
	printList(&D);
	printf("\n");
	Merge(L,D);
	
	remove2(L);
	printf("\nResult: \n");
	printList(&L);
	
	return 0;
}
