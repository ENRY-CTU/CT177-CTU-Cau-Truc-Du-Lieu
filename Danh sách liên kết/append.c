void append(ElementType x, List *L){
    Position p = *L;
    while(p->Next != NULL)
        p = p->Next;
    struct Node *t = (struct Node*)malloc(sizeof(struct Node));
    t->Element = x;
    t->Next = p->Next;
    p->Next = t;
}
