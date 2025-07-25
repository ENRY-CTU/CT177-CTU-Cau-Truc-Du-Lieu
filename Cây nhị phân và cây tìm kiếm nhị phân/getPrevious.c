Tree getPrevious(int x, Tree T) {
    if(T == NULL) return NULL;
    Tree p = T;
    Tree q = NULL;
    while(p != NULL) {
        if(x < p->Key) {
            p = p->Left;
        } else if(x > p->Key) {
            q = p;
            p = p->Right;
        } else {
            break;
        }
    }
    if(p == NULL) return NULL;
    if(p->Left != NULL) {
        p = p->Left;
        while(p->Right != NULL) {
            p = p->Right;
        }
        return p;
    }
    return q;
}
//
Tree getPrevious(int x, Tree T){
    if(T == NULL) return NULL;
    if(T->Key >= x) {
        return getPrevious(x, T->Left);
    } else {
        return (getPrevious(x, T->Right) != NULL) ? getPrevious(x, T->Right) : T;
    }
}
