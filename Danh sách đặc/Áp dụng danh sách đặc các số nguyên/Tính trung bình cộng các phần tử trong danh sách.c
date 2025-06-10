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
float avg(List L){
    float sum = 0;
    for(int i = 0; i < L.Last; i++){
        sum+= L.Elements[i];
    }
    return sum / L.Last;
}
int main(){
    List L;
    nhapDS(&L);
    inDS(L);
    printf("%.3f", avg(L));
    return 0;
}