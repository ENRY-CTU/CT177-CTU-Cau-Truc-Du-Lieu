Tree searchNode(int x, Tree T){
    if(T == NULL) return NULL;
    if(T->Key == x) return T;
    if(x < T->Key) {
        return searchNode(x, T->Left);
    } else {
        return searchNode(x, T->Right);
    }
}
