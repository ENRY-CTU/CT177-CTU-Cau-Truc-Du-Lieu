#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef int ElementType;
struct Node{
    ElementType Element;
    struct Node* Next;
};
typedef struct Node* Position;
typedef Position List;
void makenullList(List *L){
    (*L) = (struct Node*)malloc(sizeof(struct Node));
    (*L)->Next = NULL;
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
Position locate(ElementType x, List L){
    Position p = L;
    int found = 0;
    while(p->Next != NULL && (!found)){
        if(p->Next->Element == x){
            found = 1;
        }
        else{
            p = p->Next;
        }
    }
    return p;
}
void deleteList(Position p, List *L){
    if(p != NULL){
        Position t = p->Next;
        p->Next = t->Next;
        free(t);
    }
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
    Position p = L->Next;
    while(p != NULL){
        printf("%d ", p->Element);
        p = p->Next;
    }
    printf("\n");
}

int main(){
    List L;
    nhapDS(&L);
    inDS(L);
    int x; scanf("%d", &x);
    deleteList(locate(x, L), &L);
    inDS(L);
}
