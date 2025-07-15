void printNLR(AVLTree T) {
    if(T == NULL) return;
    printf("(%d - %d); ", T->Key, getHeight(T));
    printNLR(T->Left);
    printNLR(T->Right);
}
