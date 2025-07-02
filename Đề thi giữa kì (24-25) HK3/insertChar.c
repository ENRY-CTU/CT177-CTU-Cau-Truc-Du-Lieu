void insertChar(char x, Position p, List *L){
    if(L->n < MaxLength - 1 && p >= 0 && p <= L->n + 1){
        for(int i = L->n; i >= p; i--){
            L->Elements[i + 1] = L->Elements[i];
        }
        L->Elements[p] = x;
        L->n++;
    }
}
