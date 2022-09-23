#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct pilha {
	char value;
	struct pilha* prox;	
} Pilha;

Pilha* create_item(char valor) {
	Pilha* item = (Pilha*) malloc(sizeof(Pilha));
	item->value = valor;
	item->prox = NULL;

	return item;
}

void push(char new_value, Pilha* pilha) {
	Pilha* new_item = create_item(new_value);
	if(pilha->prox == NULL) {
		pilha->prox = new_item;
	} else {
		new_item->prox = pilha->prox;
		pilha->prox = new_item;
	}
}

Pilha* create_stack() {
	Pilha* new_stack = create_item(0);

	return new_stack;
}

bool stack_is_empty(Pilha* pilha) {
	return pilha->prox == NULL;
}

char pop(Pilha* pilha) {
	if(!stack_is_empty(pilha)) {
		Pilha* temp = pilha->prox;
		char value = temp->value;
		pilha->prox = pilha->prox->prox;
		free(temp);
		return value;
	}

	return '\0';
}
		
char get_top(Pilha* pilha){
	if(stack_is_empty(pilha)) {
		return '\0';
	}

	return pilha->prox->value;
}

void destroy(Pilha* pilha) {
	if(!stack_is_empty(pilha)) {
		pop(pilha);
		destroy(pilha);
	} else {
		free(pilha);
	}
}