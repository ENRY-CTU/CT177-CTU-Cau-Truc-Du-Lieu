Tree convertTree(Tree T) {
    if (T == NULL) return NULL;
    Tree temp = T->Left;
    T->Left = convertTree(T->Right);
    T->Right = convertTree(temp);
    return T;
}
