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
    for(int i = 1; i<=n; i++){
        int x; scanf("%d", &x);
        addFirst(x, L);
    }
}
void inDS(List L){
    for(Position p = L->Next; p != NULL; p = p->Next){
        printf("%d ", p->Element);
    }
    printf("\n");
}
List chepSoChan(List L1){
    List L;
    makenullList(&L);
    for(Position p = L1->Next; p != NULL; p = p->Next){
        if(p->Element % 2 == 0){
            addFirst(p->Element, &L);
        }
    }
    return L;
}
float tbChan(List L){
    float s = 0;
    int c = 0;
    for(Position p = L->Next; p != NULL; p = p->Next){
        if(p->Element % 2 == 0){
            s+= p->Element;
            c++;
        }
    }
    return s / c;
}
int main(){
    List L, L1;
    nhapDS(&L1);
    inDS(L1);
    L = chepSoChan(L1);
    inDS(L);
    printf("%.3f", tbChan(L));
    return 0;
}
