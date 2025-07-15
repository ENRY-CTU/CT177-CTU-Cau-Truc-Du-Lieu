AVLTree search(KeyType x, AVLTree T) {
    if (T == NULL) return NULL;
    if (T->Key == x) return T;
    if (x < T->Key) return search(x, T->Left);
    return search(x, T->Right);
}
