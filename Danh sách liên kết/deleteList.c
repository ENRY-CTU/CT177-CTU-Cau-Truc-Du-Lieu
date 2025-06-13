void deleteList(Postion p, List *L){
    if(p->Next != NULL){
        Position t = p->Next;
        p->Next = t->Next;
        free(t);
    }
}
