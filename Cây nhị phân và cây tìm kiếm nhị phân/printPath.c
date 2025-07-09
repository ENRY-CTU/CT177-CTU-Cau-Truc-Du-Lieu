void printPath(int x, Tree T) {
    Tree p = T;
    int found = 0;
    while(p != NULL && !found) {
        printf("%d ", p->Key);
        if (p->Key == x) {
            found = 1;
        } else if (x < p->Key) {
            p = p->Left;
        } else {
            p = p->Right;
        }
    }
    if (found) {
        printf("-> Tim thay");
    } else {
        printf("-> Khong tim thay");
    }
}
