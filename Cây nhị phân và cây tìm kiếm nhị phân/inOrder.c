void inOrder(Tree T){
    if(T == NULL) return;
    inOrder(T->Left);
    printf("%d ", T->Key);
    inOrder(T->Right);
}
