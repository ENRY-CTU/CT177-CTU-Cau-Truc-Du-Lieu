#include "AListLib.c"
#include <stdio.h>
void nhapkhongTrung(int x, List *L){
    for(int i = 0; i < L->Last; i++){
        if(L->Elements[i] == x){
            return;
        }
    }
    if(L->Last < Maxlength){
        L->Elements[L->Last] = x;
        L->Last++;
    }
}
void nhapDS(List *L){
    makenullList(L);
    int i,n;
    scanf("%d", &n);
    ElementType x;
    for(i = 0; i < n; i++){
        scanf("%d", &x);
        nhapkhongTrung(x, L);
    }
    
}
void inDS(List L){
    for(int i = 0; i < L.Last; i++){
        printf("%d ", L.Elements[i]);
    }
    printf("\n");
}
void unionSet(List L1, List L2, List *L){
    makenullList(L);
    for(int i = 0; i < L1.Last; i++){
        nhapkhongTrung(L1.Elements[i], L);
    }
    for(int i = 0; i < L2.Last; i++){
        nhapkhongTrung(L2.Elements[i], L);
    }
}
int main(){
    List L1,L2,L3;
    nhapDS(&L1);
    inDS(L1);
    nhapDS(&L2);
    inDS(L2);
    unionSet(L1,L2,&L3);
    inDS(L3);
    return 0;
}