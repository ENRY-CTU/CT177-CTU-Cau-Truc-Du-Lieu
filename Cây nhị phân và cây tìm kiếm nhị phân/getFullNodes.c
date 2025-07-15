int getFullNodes(Tree T){
    if(T == NULL) return 0;
    if(T->Left == NULL && T->Right == NULL) return 0;
    if(T->Left != NULL && T->Right == NULL) return getFullNodes(T->Left);
    if(T->Left == NULL && T->Right != NULL) return getFullNodes(T->Right);
    return 1 + getFullNodes(T->Left) + getFullNodes(T->Right);
}
