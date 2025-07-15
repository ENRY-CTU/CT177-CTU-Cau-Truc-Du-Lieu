Tree getNext(int x, Tree T) {
    Tree p = T;
    Tree q = NULL;
    while (p != NULL) {
        if (x < p->Key) {
            q = p;
            p = p->Left;
        } else {
            p = p->Right;
        }
    }
    return q;
}
//
Tree getNext(int x, Tree T){
    if(T == NULL) return NULL;
    if(T->Key <= x) {
        return getNext(x, T->Right);
    } else {
        Tree left = getNext(x, T->Left);
        return (left != NULL) ? left : T;
    }
}
