#include "AListLib.c"
#include <stdio.h>
void nhapDS(List *L){
    makenullList(L);
    int x,i,n;
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
void removeAll(int x, List *L){
    while(locate(x,*L) != L->Last + 1){
        int pos = locate(x,*L);
        deleteList(pos,L);
    }
}
int main(){
    List L;
    nhapDS(&L);
    inDS(L);
    int x; scanf("%d", &x);
    removeAll(x, &L);
    inDS(L);
    return 0;
}