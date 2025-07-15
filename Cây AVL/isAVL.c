int isAVL(AVLTree T) {
    if (T == NULL) return 1;
    int leftHeight = getHeight(T->Left);
    int rightHeight = getHeight(T->Right);
    if (abs(leftHeight - rightHeight) > 1) return 0;
    return isAVL(T->Left) && isAVL(T->Right);
}
