#include "PListLib.c"
#include <stdio.h>
void addFirst(ElementType x, List *L){
    Position p = *L;
    while(p->Next != NULL){
        p = p->Next;
    }
    struct Node* t = (struct Node*)malloc(sizeof(struct Node));
    t->Element = x;
    t->Next = p->Next;
    p->Next = t;
}
void nhapDS(List *L){
    makenullList(L);
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int x;
        scanf("%d", &x);
        addFirst(x, L);
    }
}
void inDS(List L){
    Position p = L->Next;
    while(p != NULL){
        printf("%d ", p->Element);
        p = p->Next;
    }
    printf("\n");
}
void inChan(List L1){
    List L;
    makenullList(&L);
    for(Position p = L1->Next; p != NULL; p = p->Next){
        if(p->Element % 2 == 0){
            addFirst(p->Element, &L);
        }
    }
    Position q = L;
    if(q->Next  == NULL){
        printf("DS rong");
    }
    else{
        while(q->Next != NULL){
            printf("%d ", q->Next->Element);
            q = q->Next;
        }
    }
    printf("\n");
}
void inLe(List L1){
    List L;
    makenullList(&L);
    for(Position p = L1->Next; p != NULL; p = p->Next){
        if(p->Element % 2 != 0){
            addFirst(p->Element, &L);
        }
    }
    Position q = L;
    if(q->Next  == NULL){
        printf("DS rong");
    }
    else{
        while(q->Next != NULL){
            printf("%d ", q->Next->Element);
            q = q->Next;
        }
    }
    printf("\n");
}
int main(){
    List L;
    nhapDS(&L);
    inDS(L);
    inLe(L);
    inChan(L);
    return 0;
}
