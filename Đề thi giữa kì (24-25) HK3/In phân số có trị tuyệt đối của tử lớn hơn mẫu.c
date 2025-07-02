#include <stdio.h>
#include <math.h>
typedef int Position;
typedef struct{
    int TuSo;
    int MauSo;
}ElementType;
typedef struct{
    ElementType Elements[100];
    Position n;
}List;
void inPhanSo1(List L){
    for(Position i = 0; i < L.n; i++){
        if(abs(L.Elements[i].TuSo) > abs(L.Elements[i].MauSo)){
            printf("%d/%d ", L.Elements[i].TuSo, L.Elements[i].MauSo);
        }
    }
    printf("\n");
}
