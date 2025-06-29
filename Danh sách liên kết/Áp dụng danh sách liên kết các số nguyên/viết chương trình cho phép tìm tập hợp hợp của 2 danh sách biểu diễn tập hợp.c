#include "PListLib.c"
#include <stdio.h>
int member(ElementType x, List L){
    for(Position p = L->Next; p != NULL; p = p->Next){
        if(p->Element == x){
            return 1;
        }
    }
    return 0;
}
void addFirst(ElementType x, List *L){
    Position p = *L;
    struct Node* t = (struct Node*)malloc(sizeof(struct Node));
    t->Element = x;
    t->Next = p->Next;
    p->Next = t;
}
void append(ElementType x, List *L){
    Position p = *L;
    while(p->Next != NULL){
        p = p->Next;
    }
    struct Node* t = (struct Node*)malloc(sizeof(struct Node));
    t->Element = x;
    t->Next = p->Next;
    p->Next = t;
}
//Nhap DS
void nhapDS(List *L){
    makenullList(L);
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int x;
        scanf("%d", &x);
        if(!member(x, *L)){
            addFirst(x, L);
        }
    }
}
// In DS
void inDS(List L){
    for(Position p = L->Next; p != NULL; p = p->Next){
        printf("%d ", p->Element);
    }
    printf("\n");
}
List Hop2DS(List L1, List L2){
    List L;
    makenullList(&L);
    for(Position p = L1->Next; p != NULL; p = p->Next){
        append(p->Element, &L);
    }
    for(Position q = L2->Next; q != NULL; q = q->Next){
        if(!member(q->Element, L)){
            append(q->Element, &L);
        }
    }
    return L;
}
int main(){
    List L, L1, L2;
    makenullList(&L1);
    makenullList(&L2);
    nhapDS(&L1);;
    inDS(L1);
    nhapDS(&L2);
    inDS(L2);
    L = Hop2DS(L1,L2);
    inDS(L);
    return 0;
}
