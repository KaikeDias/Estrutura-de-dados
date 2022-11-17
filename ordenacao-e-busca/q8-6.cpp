#include <iostream>
using namespace std;

bool linearSearch(int item, int vetor[], int numElementos){
    if(item == vetor[numElementos]){
        return true;
    }
    numElementos--;

    if(numElementos == 0){
        return false;
    }

    return linearSearch(item, vetor, numElementos);     
}


int main(){
    int vetor[] = {15, 2, 25, -32, 48, 5};

    if(linearSearch(32, vetor, 6)){
        cout << "O item esta no vetor" << endl;
    } else {
        cout << "O item nao esta no vetor" << endl;
    }
    
    if(linearSearch(-32, vetor, 6)){
        cout << "O item esta no vetor" << endl;
    } else {
        cout << "O item nao esta no vetor" << endl;
    }
}