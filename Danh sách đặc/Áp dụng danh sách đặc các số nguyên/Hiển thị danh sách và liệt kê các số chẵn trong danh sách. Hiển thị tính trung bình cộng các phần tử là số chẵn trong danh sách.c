#include "AListLib.c"
#include <stdio.h>
void nhapDS(List *L){
    int n, i;
    makenullList(L);
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &L->Elements[i]);
        insertList(L->Elements[i],endList(*L), L);
    }
}
void inDS(List L){
    for(int i = 0; i < L.Last; i++){
        printf("%d ", L.Elements[i]);
    }
    printf("\n");
}
void printEvenNumber(List L){
    for(int i = 0; i < L.Last; i++){
        if(L.Elements[i] % 2 == 0){
            printf("%d ", L.Elements[i]);
        }
    }
    printf("\n");
}
float average(List L){
    float avg = 0;
    int count = 0;
    for(int i = 0; i < L.Last; i++){
        if(L.Elements[i] % 2 == 0){
            avg+= L.Elements[i];
            count++;
        }
    }
    return avg / count;
}
int main(){
    List L;
    makenullList(&L);
    nhapDS(&L);
    inDS(L);
    printEvenNumber(L);
    printf("%.3f", average(L));
    return 0;
}