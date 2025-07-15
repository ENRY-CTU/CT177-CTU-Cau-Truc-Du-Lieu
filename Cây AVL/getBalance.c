int getBalance(AVLTree T) {
    if (T == NULL) return 0;
    return getHeight(T->Left) - getHeight(T->Right);
}
