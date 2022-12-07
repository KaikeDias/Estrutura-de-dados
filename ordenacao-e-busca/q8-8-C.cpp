//Dupla: Kaike Dias Miranda e Kelson Eduardo de Carvalho Soares Filho

#define troca(a, b) {int x = a; a = b; b = x; }

int particiona(int v[], int p, int u) {
    int x = v[p];
    p--;
    u++;
    while(p < u) { 
        do u--; while (v[u] > x);
        do p++; while (v[p] < x);
        if(p < u) troca(v[p], v[u]);
    }
    return u;
}


void quick_sort(int v[], int p, int u) {
    if(p >= u) return; // T(1)
    int m = particiona(v, p, u); // O(n)
    quick_sort(v, p, m); // T(n - 1)
    quick_sort(v, m+1, u); // T(0)
}

// O(1) + O(n) + O(O(n -1)) + O(1) = 
// O(2) + O(n) + O(n -1) =

