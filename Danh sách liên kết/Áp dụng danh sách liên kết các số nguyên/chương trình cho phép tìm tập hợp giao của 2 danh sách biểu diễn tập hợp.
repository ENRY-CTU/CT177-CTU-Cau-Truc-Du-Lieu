#include <stdio.h>
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
//Chen dau
void addFirst(ElementType x, List *L){
    Position p = *L;
    struct Node* t = (struct Node*)malloc(sizeof(struct Node));
    t->Element = x;
    t->Next = p->Next;
    p->Next = t;
}
//Nhap ds
int member(ElementType x, List L){
    for(Position p = L->Next; p != NULL; p = p->Next){
        if(p->Element == x){
            return 1;
        }
    }
    return 0;
}
void nhapDS(List *L){
    makenullList(L);
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int x; scanf("%d", &x);
        if(!member(x, *L)){
            addFirst(x, L);
        }
    }
}
void inDS(List L){
    for(Position p = L->Next; p != NULL; p = p->Next){
        printf("%d ", p->Element);
    }
    printf("\n");
}
List giao2DS(List L1, List L2){
    List L;
    makenullList(&L);
    for(Position p = L1->Next; p != NULL; p = p->Next){
        if(member(p->Element, L2)){
            append(p->Element, &L);
        }
    }
    return L;
}
int main(){
    List L1, L2;
    nhapDS(&L1);
    inDS(L1);
    nhapDS(&L2);
    inDS(L2);
    List L = giao2DS(L1, L2);
    inDS(L);
    return 0;
}
