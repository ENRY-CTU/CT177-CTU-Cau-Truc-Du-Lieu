void preOrder(Tree T){
    if(T == NULL) return;
    printf("%d ", T->Key);
    preOrder(T->Left);
    preOrder(T->Right);
}
