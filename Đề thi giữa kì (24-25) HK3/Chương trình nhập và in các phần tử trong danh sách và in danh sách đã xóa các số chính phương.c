#include <stdio.h>
#include <math.h>
typedef int Position;
typedef int ElementType;
typedef struct{
    ElementType Element[100];
    Position Last;
}List;
void makenullList(List *L){
    L->Last = -1;
}
void append(ElementType x, List *L){
    L->Last++;
    L->Element[L->Last] = x;
}
void nhapDS(List *L){
    makenullList(L);
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int x; scanf("%d", &x);
        append(x, L);
    }
}
void inDS(List L){
    for(int i = 0; i <= L.Last; i++){
        printf("%d ", L.Element[i]);
    }
    printf("\n");
}
void inSoChinhPhuong(List L){
    for(int i = 0; i <= L.Last; i++){
        for(int j = 0; j <= L.Last; j++){
            if(L.Element[i] == j * j){
                printf("%d ", L.Element[i]);
            }
        }
    }
    printf("\n");
}
int main(){
    List L;
    nhapDS(&L);
    inDS(L);
    inSoChinhPhuong(L);
    return 0;
}
