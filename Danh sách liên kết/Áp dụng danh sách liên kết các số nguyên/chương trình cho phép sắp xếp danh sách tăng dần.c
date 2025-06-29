#include "PListLib.c"
#include <stdio.h>
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
void NhapDS(List *L){
    makenullList(L);
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int x;
        scanf("%d", &x);
        append(x, L);
    }
}
void inDS(List L){
    for(Position p = L->Next; p != NULL; p = p->Next){
        printf("%d ", p->Element);
    }
    printf("\n");
}
void sort(List *L){
    for(Position p = *L; p->Next != NULL; p = p->Next){
        for(Position q = p->Next; q->Next != NULL; q = q->Next){
            if(p->Next->Element > q->Next->Element){
                int temp = p->Next->Element;
                p->Next->Element = q->Next->Element;
                q->Next->Element = temp;
            }
        }
    }
}
int main(){
    List L;
    NhapDS(&L);
    inDS(L);
    sort(&L);
    inDS(L);
    return 0;
}
