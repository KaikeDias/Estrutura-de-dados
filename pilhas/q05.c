#include <stdio.h>
#include <stdbool.h>
#include "pilha.c"

bool balanceada(char expressao[]){
    Pilha pilha = createP(100);

    for(int i = 0; i < 100; i++){
        if(expressao[i] == '[' || expressao[i] == '(' || expressao[i] == '{'){
            push(pilha, expressao[i]);
        }else if(expressao[i] == ']'){
            if(pop(pilha) != '['){
                return false;
            }
        }else if(expressao[i] == ')'){
            if(pop(pilha) != '('){
                return false;
            }
        }else if(expressao[i] == '}'){
            if(pop(pilha) != '{'){
                return false;
            }
        }
    }

    return true;
}

int main(){
    char expressao[100] = "{[([{}])]}";

    if(balanceada(expressao)){
        printf("Esta balanceada");
    }else{
        printf("Nao esta balanceada");
    }

    return 0;
}