#include "pilha.h"
#include "ctype.h"

int prio(char o) {

    switch(o) {
        case '(': return 0;
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 2;
    }

    return -1;

}

char* posfixa(char* e) {
    static char s[256];
    int j=0;
    Pilha* P = create_stack();
    for(int i = 0; e[i]; i++) {
        if(e[i] == '(') push('(', P);
        else if(isdigit(e[i])) s[j++] = e[i];
        else if(strchr("+-/*", e[i])) {
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

int valor(char* e) {
    Pilha* P = create_stack();
    for(int i = 0; e[i]; i++) {
        if(isdigit(e[i])) push(e[i]-'0', P);
        else {
            int y = pop(P);
            int x = pop(P);
            switch(e[i]) {
                case '+': push(x+y, P); break;
                case '-': push(x-y, P); break;
                case '*': push(x*y, P); break;
                case '/': push(x/y, P); break;
            }
        }
    }

    int z = pop(P);
    destroy(P);
    return z;
}

int main() {

    char expression[256];

    printf("digite uma expressão numérica: ");
    scanf("%s", &expression);

    char* expressao_posfixa = posfixa(expression);

    printf("\nexpressão posfixa: %s\n", expressao_posfixa);

    int value = valor(expressao_posfixa);

    printf("\no resultado é: %d\n", value);

    return 0;
}