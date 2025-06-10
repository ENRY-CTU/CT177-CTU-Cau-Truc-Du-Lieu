#include "AListLib.c"
#include <stdio.h>
#define Max
void nhapDS(List *L){
    makenullList(L);
    ElementType i,n,x;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &x);
        insertList(x, endList(*L), L);
    }
}
void inDS(List L){
    for(int i = 0; i < L.Last; i++){
        printf("%d ", L.Elements[i]);
    }
    printf("\n");
}
void xoa(int x, List *L){
    int p = locate(x, *L);
    if(p <= L->Last){
        deleteList(p, L);
    }
}
int main(){
    List L;
    nhapDS(&L);
    inDS(L);
    int x;
    scanf("%d", &x);
    xoa(x, &L);
    inDS(L);
    return 0;
}