#include <iostream>

using namespace std;

bool binarySearch(int itemProcurado, int vetor[], int numElementos, int u)
{
    int m = (u + numElementos) / 2;

    if (itemProcurado == vetor[m]) {
        return true;
    }

    if (itemProcurado < vetor[m]) {
        numElementos = m - 1;
    }else {
        u = m + 1;
    }

    if (numElementos < u) {
        return false;
    }

    return binarySearch(itemProcurado, vetor, numElementos, u);
}

int main() {
    int vetor[] = {15, 2, 25, -32, 48, 5};

    if(binarySearch(32, vetor, 6, 0)){
        cout << "O item esta no vetor" << endl;
    } else {
        cout << "O item nao esta no vetor" << endl;
    }
    
    if(binarySearch(-32, vetor, 6, 0)){
        cout << "O item esta no vetor" << endl;
    } else {
        cout << "O item nao esta no vetor" << endl;
    }

    return 0;
}