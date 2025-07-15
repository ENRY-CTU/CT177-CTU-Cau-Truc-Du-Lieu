void printLNR(AVLTree T) {
    if (T == NULL) return;
    printLNR(T->Left);
    printf("%d ", T->Key);
    printLNR(T->Right);
}
