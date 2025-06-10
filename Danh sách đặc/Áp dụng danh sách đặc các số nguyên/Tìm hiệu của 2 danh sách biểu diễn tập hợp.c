#include "AListLib.c"
#include <stdio.h>
int member(int x, List L){
    for(int i = 0; i < L.Last; i++){
        if(L.Elements[i] == x){
            return 1;
        }
    }
    return 0;
}
void nhapDS(List *L){
    makenullList(L);
    int i,n;
    scanf("%d",&n);
    ElementType x;
    for(i = 0; i < n; i++){
        scanf("%d", &x);
        if(!member(x, *L)){
            insertList(x, endList(*L), L);
        }
    }
}
void inDS(List L){
    for(int i = 0; i < L.Last; i++){
        printf("%d ", L.Elements[i]);
    }
    printf("\n");
}
void difference(List L1, List L2, List *L){
    makenullList(L);
    for(int i = 0; i < L1.Last; i++){
        if(!member(L1.Elements[i], L2)){
            insertList(L1.Elements[i], endList(*L), L);
        }
    }
}
int main(){
    List L1, L2, L3;
    nhapDS(&L1);
    inDS(L1);
    nhapDS(&L2);
    inDS(L2);
    difference(L1,L2,&L3);
    inDS(L3);
}
