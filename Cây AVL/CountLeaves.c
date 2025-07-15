int CountLeaves(AVLTree T) {
    if (T == NULL) return 0;
    if (T->Left == NULL && T->Right == NULL) return 1;
    return CountLeaves(T->Left) + CountLeaves(T->Right);
}
