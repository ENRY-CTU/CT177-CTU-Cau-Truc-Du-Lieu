void xoaTai(int p, DanhSach *L){
    if(p < 0 || p >= L->n) return;
    for(int i= p - 1; i<L->n - 1; i++){
        L->A[i] = L->A[i+1];
    }
    L->n--;
}