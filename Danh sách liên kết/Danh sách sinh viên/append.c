int append(Student s, List *L){
    struct Node* p = locate(s.ID, *L);
    if(p->Next != NULL){
        return 0;
    }
    struct Node* t = (struct Node*)malloc(sizeof(struct Node));
    t->Element = s;
    t->Next = NULL;
    p->Next = t;
    return 1;
}
