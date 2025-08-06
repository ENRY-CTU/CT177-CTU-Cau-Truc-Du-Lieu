void posOrder(Tree T){
    if(T == NULL) return;
    posOrder(T->Left);
    posOrder(T->Right);
    printf("%d ", T->Key);
}
