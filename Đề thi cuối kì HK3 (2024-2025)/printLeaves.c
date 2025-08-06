void printLeaves(AVLTree T) {
    if (T == NULL) return;
    if (T->Left == NULL && T->Right == NULL) {
        printf("%d ", T->Key);
    }
    printLeaves(T->Left);
    printLeaves(T->Right);
}
