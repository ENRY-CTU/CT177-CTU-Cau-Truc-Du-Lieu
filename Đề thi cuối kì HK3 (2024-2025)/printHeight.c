void printHeight(int height, AVLTree T) {
    if (T == NULL) return;
    if (getHeight(T) == height) {
        printf("%d ", T->Key);
    }
    printHeight(height, T->Left);
    printHeight(height, T->Right);
}
