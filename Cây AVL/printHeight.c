void printHeight(AVLTree T) {
    if (T == NULL) return;
    printf("(%d - %d); ", T->Key, getHeight(T));
    printHeight(T->Left);
    printHeight(T->Right);
}
