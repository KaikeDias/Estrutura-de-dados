#include "pilha.h"
#include "ctype.h"

int prio(char o) {

    switch(o) {
        case '(': return 0;
        case '|': return 1;
        case '&': return 2;
        case '~': return 3;
    }

    return -1;

}

char* posfixa(char* e) {
    static char s[256];
    int j=0;
    Pilha* P = create_stack();
    for(int i = 0; e[i]; i++) {
        if(e[i] == '(') push('(', P);
        else if(strchr("VF", e[i])) s[j++] = e[i];
        else if(strchr("~&|", e[i])) {
            while(!stack_is_empty(P) && prio(get_top(P)) >= prio(e[i]))
                s[j++] = pop(P);
            push(e[i], P);
        } else if(e[i] == ')') {
            while(get_top(P) != '(')
                s[j++] = pop(P);
            pop(P);
        }
    }

    while(!stack_is_empty(P)) s[j++] = pop(P);
    s[j] = '\0';
    destroy(P);
    return s;
}

char not(char c) {
    if(c == 'V') return 'F';
    return 'V';
}

char and(char c, char d) {
    if(c == 'F') return 'F';
    if(d == 'F') return 'F';
    return 'V';
}

char or(char c, char d) {
    if(c == 'V') return 'V';
    if(d == 'V') return 'V';
    return 'F';
}

char valor(char* e) {
    Pilha* P = create_stack();
    for(int i = 0; e[i]; i++) {
        if(strchr("VF", e[i])) push(e[i], P);
        else {
            int y = pop(P);
            int x;
            switch(e[i]) {
                case '~':
                    push(not(y), P);
                    break;
                case '&':
                    x = pop(P);
                    push(and(x, y), P);
                    break;
                case '|':
                    x = pop(P);
                    push(or(x, y), P);
                    break;
            }
        }
    }

    char z = pop(P);
    destroy(P);
    return z;
}

int main() {
    
    char expression[256];

    printf("digite uma expressão numérica: ");
    scanf("%s", &expression);

    char* expressao_posfixa = posfixa(expression);

    printf("\nexpressão posfixa: %s\n", expressao_posfixa);

    char value = valor(expressao_posfixa);

    printf("\no resultado é: %c\n", value);

    return 0;
}