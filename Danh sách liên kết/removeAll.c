void removeAll(ElementType x, List *L){
    Position P = *L;
    if(P == NULL) return;
    while(locate(x, *L)->Next != NULL){
        deleteList(locate(x, *L), L);
    }
}
