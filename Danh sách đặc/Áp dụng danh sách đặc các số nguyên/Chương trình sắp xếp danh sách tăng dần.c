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
void sort(List *L){
    for(int i = 0; i < L->Last; i++){
        for(int j = 0; j < L->Last - i - 1; j++){
            if(L->Elements[j] > L->Elements[j + 1]){
                int temp = L->Elements[j];
                L->Elements[j] = L->Elements[j + 1];
                L->Elements[j + 1] = temp;
            }
        }
    }
}
int main(){
    List L;
    nhapDS(&L);
    inDS(L);
    sort(&L);
    inDS(L);
    return 0;
}