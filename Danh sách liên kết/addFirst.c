void addFirst(ElementType x, List *L){
    Position p = *L;
    struct Node* t = (struct Node*)malloc(sizeof(struct Node));
    t->Element = x;
    t->Next = p->Next;
    p->Next = t;
}
