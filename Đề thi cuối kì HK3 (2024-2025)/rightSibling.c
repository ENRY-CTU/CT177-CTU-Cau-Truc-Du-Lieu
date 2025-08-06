Tree rightSibling(int x, Tree T){
    if(T == NULL) return 0;
    if(T->Left != NULL && T->Left->Key == x) return T->Right;
    if(T->Right != NULL && T->Right->Key == x) return T->Left;
    Tree left = rightSibling(x, T->Left);
    if(left != NULL) return left;
    return rightSibling(x, T->Right);
}
