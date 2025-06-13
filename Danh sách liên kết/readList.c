void readList(List *L){
    makenullList(L);
    int x,n;
    scanf("%d", &n);
    Position p = *L;
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        struct Node* t = (struct Node*)malloc(sizeof(struct Node));
        t->Element = x;
        t->Next = NULL;
        p->Next = t;
        p = t;
    }
}
