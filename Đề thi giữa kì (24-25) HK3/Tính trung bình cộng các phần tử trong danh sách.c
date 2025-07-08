#include <stdio.h>
typedef struct {
    int Elements[100];
    int Last;
} List;
typedef int Position;
void makenullList(List *L){
    L->Last = 0;
}
void insertList(int x, Position p, List *L){
    if(L->Last < 100 && p >= 0 && p <= L->Last){
        for(int i = L->Last; i > p; i--){
            L->Elements[i] = L->Elements[i-1];
        }
        L->Elements[p] = x;
        L->Last++;
    }
}
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
//-----------------------------------//
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
