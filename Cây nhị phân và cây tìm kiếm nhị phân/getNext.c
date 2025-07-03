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
