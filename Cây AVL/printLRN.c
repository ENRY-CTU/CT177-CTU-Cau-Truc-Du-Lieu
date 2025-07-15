void printLRN(AVLTree T) {
    if (T == NULL) return;
    printLRN(T->Left);
    printLRN(T->Right);
    printf("(%d - %d); ", T->Key, getHeight(T));
}
